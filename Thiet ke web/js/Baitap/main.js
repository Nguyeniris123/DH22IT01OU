function loadCates() {
    fetch("./data/categories.json").then(res=> res.json()).then(data => {
    let h = "";
    for (let c of data) 
        h+=`<li><a href="#">${c.name}</a></li>`;
        //cách 1
    // let d = document.getElementById("menu");
    // d.innerHTML+= h;

        // cách 2
    let d = document.querySelector("#menu :first-child");
    d.insertAdjacentHTML("afterend", h);
    });
};

function loadProducts(){
    fetch("./data/products.json").then(res => res.json()).then(data => {
        let h = "";
        for (let p of data) 
            h+=`
            <div class="product">
            <div>
                <div><img src="${p.image}" alt="iPhone" /></div>
                <h3>${p.name}</h3>
                <p>${p.price} VNĐ</p>
                <a href="javascript:;" class="del">&times;</a>
            </div>
        </div>
        `;
        let d = document.getElementById("products");
        d.innerHTML+= h;
        let buttons = document.getElementsByClassName("del");
    for (let b of buttons)

    //sự kiện click xoá
    b.addEventListener("click", function() {
        if (confirm("Bạn có chắc chẵn xoá ko?") === true)
            this.parentNode.parentNode.remove();
    });
    })


    // Thêm class error nháy 3 lần nếu search rỗng khi lơ chuột ra
    let k = document.getElementById("kw");
    k.addEventListener("blur", function() {
        if (this.value === "")
        this.classList.toggle("error");
    });
};

window.onload = function() {
    loadCates();
    loadProducts();
};  

