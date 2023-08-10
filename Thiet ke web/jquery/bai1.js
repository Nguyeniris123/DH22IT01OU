$(document).ready(function() {
    $("#doitienbtn").click(function() {
        if ($("#stId").val() === "") {
            $("#stId").toggleClass("error");
            return;
        }
        let st = parseFloat($("#stId").val());
        let dv = $(("#dvId")).val();
        let k ="Kết quả tại đây";
        if (dv === "usd") {
            k= st / 22000 + "USD";
        } else if (dv === "aud") {
            k= st / 16000 + "AUD";
        } else {
            k= st / 25000 + "EUR";
        }
        $("#kq").html(`<h1>${k}</h1>`);
    });
});