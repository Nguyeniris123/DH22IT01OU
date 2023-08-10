$(document).ready(function() {
    $(".tab a").click(function() {
        $(".tab > li").removeClass("active");
        $(this).parent().addClass("active");
        let h = $(this).attr("href");
    $(".tab-content > div").slideUp("slow");
    $(h).slideDown("slow");
    });
});