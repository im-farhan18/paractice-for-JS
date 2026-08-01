
let button = document.createElement("button")
button.style.backgroundColor = " rgb(159, 80, 80)";
button.style.color ="black";
button.innerText= "click me";
document.querySelector("body").prepend(button)

button.onclick = (evt) => {
    console.log(evt.type);
    alert("its done bro !");
    let a =18;
    a++
    console.log(a);
}