function init() {
    var main = document.getElementById("mainImg");
    var images = document.querySelectorAll("div.thumb img");
    for (var i = 0; i < images.length; i++)
        images[i].onclick = function() {
            var path = this.src;
            main.setAttribute("src", path);
        }
    var buttons = document.querySelectorAll(".btn input");
    for (var i = 0; i < buttons.length; i++) {
        buttons[i].onclick = function() {
            var color = this.getAttribute("value");
            main.src = "/thiet ke web/js/galaxys8/"+ color +"_1.jpg";
            // var images = document.querySelectorAll("div.thumb img");   // đã khai báo ở trên 
            for (var i = 0; i < images.length; i++) {
                images[i].src = `/thiet ke web/js/galaxys8/${color}_${i+1}.jpg`;
            }
        }
    }
}
