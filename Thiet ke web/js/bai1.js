function validate(ele) {
    if (ele.value === '') {
        ele.classList.remove("error");
        setTimeout(() => ele.classList.add("error"), 5);
        return true;
    }
    return false;
}
function giaiBac2() {
    let a = document.getElementById("aId");
    let b =document.getElementById("bId");
    let c =document.getElementById("cId");
    if (a !== null && b !== null && c !== null) {
        if (validate(a) === true || validate(b) === true || validate(c) === true )
            return;
        a = parseFloat(a.value);
        b = parseFloat(b.value);
        c = parseFloat(c.value);
        // Biện luận
        let k = "kết quả tại đây";
        if (a === 0) {
            if (b===0) {
                if (c===0) {
                    k="PT có vô số nghiệm";
                } else {
                    k="PT vô nghiệm"
                } 
            } else {
                k="PT có nghiệm duy nhất x= " + -c/b;
            }
        } else {
            let delta = Math.pow(b,2) - 4*a*c;
            let denta = "Đen ta có giá trị" + delta;
            if (delta < 0) {
                k="PT vô nghiệm";
            } else if (delta>0) {
                let x1 = (-b+Math.sqrt(delta))/2*a;
                let x2 = (-b-Math.sqrt(delta))/2*a;
                k = "x1 là: " + x1 + ", x2 là: " + x2;
            } else {
                let x = -b/2*a;
                k="PT có nghiệm kép x= "+ x;
            }
        }

        let kq = document.getElementById("kq");
        if (kq !== null ) {
            kq.innerHTML = `<h2 style="color:red;">${k}</h2>`;
        } else 
            alert(kq);
    }
}

function doiTien() {
    let d = document.getElementById("dId");
    let v = document.getElementById("donVi");
    if (d !== null) {
        if (validate(d) === true)
            return;
        d = parseFloat(d.value);
        let t = "kết quả tại đây";
        if (v.value === "EUR")  
            t = d / 26000 + " EUR";
        if (v.value === "USD")  
            t = d / 22000 + " USD";
        if (v.value === "AUD")  
            t = d / 16000 + " AUD";
        let tien = document.getElementById("tien");
        if (tien !== null ) {
            tien.innerHTML = `<h2 style="color:red;">${t}</h2>`;
        } else 
            alert(t);
    }
}