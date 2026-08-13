
let button = document.createElement("button");
button.style.backgroundColor = " rgb(159, 80, 80)";
button.style.color ="black";
button.innerText= "click me";
document.querySelector("body").prepend(button)




let button = document.createElement("button");
button.style.backgroundColor = " rgb(159, 80, 80)";
button.style.color ="black";
button.innerText= "click me";
document.querySelector("body").prepend(button)

button.onclick = (evt) => {
    let div = document.createElement("div");
    div.style.height ="100px";
    div.style.width ="100px";
    div.innerText ="a event div";
    div.style.backgroundColor ="blue";
    div.style.color ="black";
    div.style.border ="solid 4px pink"
    
    document.querySelector("body").prepend(div)

}



button.onclick = (evt) => {
    let div = document.createElement("div");
    div.style.height ="100px";
    div.style.width ="100px";
    div.innerText ="a event div";
    div.style.backgroundColor ="blue";
    div.style.color ="black";
    div.style.border ="solid 4px pink"
    
    document.querySelector("body").prepend(div)

}
