$(document).ready(function() {
    let n = $(".slider > div").length;
    let h = "";
    for (let i=0;i<n;i++)
        h+=`
            <button class="digit">${i+1}</button>
        `;
    $(".slider-button :first-child").after(h);
    $(".slider").height($(".slider img").height()+5);

    let current = -1;

    let showSlider = (current) => {
        $(".slider > div").hide();
        $(".slider > div").eq(current).show();
        $("button.digit").removeClass("active");
        $("button.digit").eq(current).addClass("active");
    };

    $("button.digit").click(function(){
        let current = parseInt( $(this).text()) - 1;
        showSlider(current);
        clearInterval(timer);
        runSlider();
    });
    $(".next").click(function() {
        current++;
        if (current === n)
            current=0;
        showSlider(current);
    });

    $(".prev").click(function() {
        current--;
        if (current < 0)
            current= n-1;
        showSlider(current);
    });

    let timer =  null;
    let runSlider = () => {
        timer = setInterval(() => {
            $(".next").click();
        }, 2000);
    };
    runSlider();
});