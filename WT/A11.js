function dataCheck() {
    var name = document.getElementById("uname").value;
    var password = document.getElementById("paswd").value;

    if(name=="admin" && password=="123") {
        document.getElementById("myform").action = "./index.html";
        alert("done")
    }
    else {
        alert("somthing wrong!!!");
    }
}

function resetData() {
    document.getElementById("myform").reset();
}