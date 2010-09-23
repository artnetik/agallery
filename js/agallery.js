$(document).ready(function() {
  $('#gallery-pages')
  .cycle({
      speed:  'fast',
      timeout: 0,
      pager:  '#nav',
      prev:   '#prev',
      next:   '#next',
  });
});