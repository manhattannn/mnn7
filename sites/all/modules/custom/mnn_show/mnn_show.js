var schedule = (function($){

  var schedDate = '';
  var prevDate = '';
  var nextDate = '';
  var offset, table, headerHeight;
  var isEventsSetup = false;
  var utc_timezone_offset = 0;

  function init(){
    generateHtml();
    offset = $('#schedule-header').offset().top;
    loadTableHeader();
    loadSchedule(schedDate);
  }

  function generateHtml(){
    var nav = '<a href="#" class="prev"><span>Previous</span></a><a href="#" class="next"><span>Next</span></a>';
    nav += '<div class="schedule-date"><span class="time"></span><input type="text" id="date-picker" name="date-picker"></div> ';
    $('#schedule-header .nav').html(nav);
  }

  function setupEvents(){
    $('#schedule-header .nav a.prev').click(function(){
      loadSchedule(prevDate);
      return false;
    });
    $('#schedule-header .nav a.next').click(function(){
      loadSchedule(nextDate);
      return false;
    });

    $(window).scroll(function(){
      if ($(window).scrollTop() > (table - headerHeight)){
        var top = $('#schedule').height() - headerHeight;
        $('#schedule-header .inner').css('position', 'absolute').addClass('floating').css('top', top);
      }
      else if ($(window).scrollTop() >= offset){
        $('#schedule-header .inner').css('position', 'fixed').addClass('floating').css('top', 0);
      }
      else {
        $('#schedule-header .inner').css('position', 'relative').removeClass('floating').css('top', 0);
      }
    });

    $('#date-picker').datepicker({
      onClose: function(dateText, inst){
        if (dateText != schedDate){
          loadSchedule(dateText);
        }
      },
      showOn: 'button',
      buttonImageOnly: true,
      buttonImage: '/sites/default/themes/mnn/images/icon_calendar.png'
    });

    isEventsSetup = true;
  }

  function loadTableHeader(){
    $.ajax({
      type: 'GET',
      url: Drupal.settings.mnn_show.reportingUrl + '/schedule/header',
      dataType: 'json',
      crossDomain : true,
      success: function(data){
        var cols = '';

        var col = '<div class="col col-time">';
        col += '<div class="cell heading time"></div>';
        col += '</div>';
        cols += col;

        for (var i = 1; i <= 4; i++ ){
          col = '<div class="col col-' + i + '">';
          col += '<div class="cell heading ch'+i+'">'+data['channel'+i].name+'</div>';
          col += '</div>';
          cols += col;
        }

        $('#schedule-header .channels').html(cols);
        $('#schedule-header').height(91);
        headerHeight = $('#schedule-header').outerHeight();
      }
    });
  }

  function loadSchedule(date){
    var actualDateObj = new Date();
    // Create neutral time for timezone=0.
    var utc = actualDateObj.getTime() + (actualDateObj.getTimezoneOffset() * 60000);
    // Set the timezone to newYork UTC + utc_timezone_offset hours.
    utc_timezone_offset = (utc_timezone_offset == 0 ? -5 : utc_timezone_offset);
    actualDateObj = new Date(utc + (3600000 * utc_timezone_offset));

    if (!date) {
      date = actualDateObj.mmddyyyyMnn();

      if (utc_timezone_offset == 0 ) {
        date = Drupal.settings.mnn_show.actualDate;
      }
    }

    $.ajax({
      type: 'GET',
      url: Drupal.settings.mnn_show.reportingUrl + '/schedule/get' + '?date=' + date,
      dataType: 'json',
      success: function(data){
        utc_timezone_offset = data.utc_timezone_offset;
        schedDate = data.schedDate;
        prevDate = data.prevDate;
        nextDate = data.nextDate;
        $('#schedule-header .schedule-date .time').html(data.displayDate);

        var cols = '';
        var toolTipTextHtml = '';

        var colTime = '<div class="col col-time">';
        var current, primetime;
        for (var i = 0; i < 48; i++){
          checkIfProgramIsNowPlayed(data.time[i], date) ? current = ' current' : current = '';
          data.time[i].isPrimetime == 'true' && current == '' ? primetime = ' primetime' : primetime = '';
          colTime += '<div class="cell cell-'+i+' t'+data.time[i].duration+' s'+data.time[i].start+current+primetime+'"><div class="cell-inner">'+ data.time[i].display + '</div></div>';
        }
        colTime += '</div>';
        cols += colTime;

        for (var i = 1; i <= 4; i++ ){
          var col = '<div class="col col-' + i + '">';
          var channel = data['ch' + i];
          for (var j = 0; j < channel.length; j++){

            var link = '<p>' + channel[j].title + '</p>';
            var category = '<div class="category">'+channel[j].category+'</div>';

            // Create tooltip text. Tooltip text consists
            // of title, category and description.
            var tooltipText = '<h1>' + channel[j].title.replace(/"/g, '&#34;').replace(/'/g, '&#39;') + '</h1>';
            tooltipText += '<p>' + channel[j].category.replace(/"/g, '&#34;').replace(/'/g, '&#39;') + '</p>';
            if(!!(channel[j].description)){
              tooltipText += '<br/><p>' + channel[j].description.replace(/"/g, '&#34;').replace(/'/g, '&#39;') + '</p>';
            }

            // We are storing tooltip text in divs that are
            // not displayed have display:none;. This is because
            // setting the tooltip text directly via onmouseover=""
            // causes problem with ' " symbols even
            // with html versions of them &#34; and &#39;.
            var objectId = 'tooltip-' + 'col-' + i + '-cell-' + j;
            var onMouseOver = 'tooltip.pop(this, \'#' + objectId + '\', {position:0})';
            toolTipTextHtml += '<div id="' + objectId + '">' + tooltipText + '</div>';

            checkIfProgramIsNowPlayed(channel[j], date) ? current = ' current' : current = '';
            (channel[j].isPrimetime == 'true' && current == '') ? primetime = ' primetime' : primetime = '';
            var cls = 'cell cell-' + j + ' t' + channel[j].duration + ' s' + channel[j].start + current + primetime;
            col += '<div class="'+ cls +'" onmouseover="' + onMouseOver + '"><div class="cell-inner">'+link+category+'</div></div>';
          }
          col += '</div>';
          cols += col;
        }

        // We are storing tooltip text in divs that are
        // not displayed have display:none;. This is because
        // setting the tooltip text directly via onmouseover=""
        // causes problem with ' " symbols even
        // with html versions of them &#34; and &#39;.
        cols += '<div style="display:none;">' + toolTipTextHtml + '</div>';

        $('#schedule #cols').html(cols);
        table = $('#schedule').offset().top + $('#schedule').outerHeight();

        if (!isEventsSetup)
        {
          setupEvents();
        }
      }
    });
  }

  function checkIfProgramIsNowPlayed(program, date) {
    var actualDateObj = new Date(),
      actualTimeMinutes,
      actualProgramStartTime = program.start.split("-"),
      actualProgramEndTime,
      utc;

    // Create neutral time for timezone=0.
    utc = actualDateObj.getTime() + (actualDateObj.getTimezoneOffset() * 60000);
    // Set the timezone to newYork UTC + utc_timezone_offset hours.
    utc_timezone_offset = (utc_timezone_offset == 0 ? -5 : utc_timezone_offset);
    actualDateObj = new Date(utc + (3600000 * utc_timezone_offset));

    actualTimeMinutes  = actualDateObj.getHours() * 60 + actualDateObj.getMinutes()

    // We only want to highlight programs from today as now playing.
    if (date != actualDateObj.mmddyyyyMnn()) {
      return false;
    }

    actualProgramStartTime = parseInt(actualProgramStartTime[0]) * 60 + parseInt(actualProgramStartTime[1]);
    actualProgramEndTime = actualProgramStartTime + parseInt(program.duration);

    return (actualProgramStartTime <= actualTimeMinutes && actualTimeMinutes < actualProgramEndTime);
  }

  return {
    init: init
  }
})(jQuery);


var ycSchedule = (function($){

  var schedDate = '';
  var prevDate = '';
  var nextDate = '';
  var offset, table, headerHeight;
  var isEventsSetup = false;

  function init(){
    generateHtml();
    offset = $('#schedule-header').offset().top;
    loadSchedule(schedDate);
  }

  function generateHtml(){
    var nav = '<a href="#" class="prev"><span>Previous</span></a><a href="#" class="next"><span>Next</span></a>';
    nav += '<div class="schedule-date"><span class="time"></span><input type="text" id="date-picker" name="date-picker"></div> ';
    $('#schedule-header .nav').html(nav);
  }

  function setupEvents(){
    $('#schedule-header .nav a.prev').click(function(){
      loadSchedule(prevDate);
      return false;
    });
    $('#schedule-header .nav a.next').click(function(){
      loadSchedule(nextDate);
      return false;
    });

    $(window).scroll(function(){
      if ($(window).scrollTop() > (table - headerHeight)){
        var top = $('#schedule').height() - headerHeight;
        $('#schedule-header .inner').css('position', 'absolute').addClass('floating').css('top', top);
      }
      else if ($(window).scrollTop() >= offset){
        $('#schedule-header .inner').css('position', 'fixed').addClass('floating').css('top', 0);
      }
      else {
        $('#schedule-header .inner').css('position', 'relative').removeClass('floating').css('top', 0);
      }
    });

    $('#date-picker').datepicker({
      onClose: function(dateText, inst){
        if (dateText != schedDate){
          loadSchedule(dateText);
        }
      },
      showOn: 'button',
      buttonImageOnly: true,
      buttonImage: '/sites/default/themes/mnn/images/icon_calendar.png'
    });

    isEventsSetup = true;
  }

  function loadSchedule(date){

    if (!date) {
      var d = new Date();
      date = d.mmddyyyyMnn();

      if (utc_timezone_offset == 0 ) {
        date = Drupal.settings.mnn_show.actualDate;
      }
    }

    $.ajax({
      type: 'GET',
      url: Drupal.settings.mnn_show.reportingUrl + '/youth-channel/schedule/get' + '?date=' + date,
      dataType: 'json',
      success: function(data){
        schedDate = data.schedDate;
        prevDate = data.prevDate;
        nextDate = data.nextDate;
        $('#schedule-header .schedule-date .time').html(data.displayDate);

        //--- row html
        (function(){
          var row, col;
          for (row in data.timeRow) {
            var thisRow = data.timeRow[row];
            var rows = '';
            // time row
            var rowTime = '<div class="row row-time"><div class="cell day empty"><div class="inner"></div></div>';
            for (var j = 0; j < thisRow.length; j++) {
              rowTime += '<div class="cell cell-'+j+' t60"><div class="inner">'+ thisRow[j] + '</div></div>';
            }
            rowTime += '</div>';
            rows += rowTime;

            // show rows
            var thisCol = data.dayCol[row];
            for (col in thisCol) {
              var thisColItem = thisCol[col];
              var showRow = '<div class="row row-shows row-'+col+'">';
              showRow += '<div class="cell day"><div class="inner">'+thisColItem+'</div></div>';
              showRow += '</div> ';
              rows += showRow;
            }

            // insert html
            $('#yc-schedule #' + row + ' .rows').html(rows);
          }
        })();

        var current;

        function cell(show){
          var link = '<div class="link-wrapper"><a href="'+show.link+'">'+show.title+'</a></div>';
          var category = '<div class="category">'+show.category+'</div>';
          current = show.is_today == 'true' ? ' current' : '';
          var cls = 'cell cell-' + show.ordinal + ' t' + show.duration + current;
          return '<div class="'+ cls +'"><div class="inner">'+link+category+'</div></div>';
        }

        // show cells
        (function(){
          for (var scheduleIdx in data.shows) {
            for (var showIdx in data.shows[scheduleIdx]) {
              var showData = data.shows[scheduleIdx][showIdx];
              var showHtml = cell(showData);
              $('#' + scheduleIdx + ' .row-' + showData['day_of_week']).append(showHtml);
            }
          }
        })();

        table = $('#yc-schedule').offset().top + $('#yc-schedule').outerHeight();
        if (!isEventsSetup)
          setupEvents();
      }
    });
  }

  return {
    init: init
  }
})(jQuery);

Object.size = function(obj) {
  var size = 0, key;
  for (key in obj) {
    if (obj.hasOwnProperty(key)) size++;
  }
  return size;
};

(function ($) {
  $(document).ready(function(){
    if ($('#schedule').length){
      schedule.init();
    }
    if ($('#yc-schedule').length){
      ycSchedule.init();
    }
  });
}(jQuery));

// Enhance Date object's prototype to add
// function to display todays date formatted.
(function ($) {
  Date.prototype.mmddyyyyMnn = function() {
    var yyyy = this.getFullYear().toString();
    var mm = (this.getMonth()+1).toString(); // getMonth() is zero-based
    var dd  = this.getDate().toString();
    return (mm[1]?mm:"0"+mm[0]) + '/' + (dd[1]?dd:"0"+dd[0]) + '/' + yyyy; // padding
  };
}(jQuery));