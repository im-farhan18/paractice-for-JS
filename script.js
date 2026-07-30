button =document.createElement('button');
button.textContent = 'Click Me';
button.style.backgroundColor = 'blue';
button.style.color = 'white';

document.querySelector("body").prepend(button)

let p = document.querySelector("p")
p.classList.add("newclass")
