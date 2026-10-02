let btn1  = document.querySelector('#btn1');



btn1.addEventListener('click',function(){
    let color = getColor();
    let para = document.querySelector('#para');
    let div = document.querySelector('#color');
    para.innerText = color;
    div.style.backgroundColor = color;
}
)

function getColor(){
    let red = Math.floor(Math.random()* 255);
    let green = Math.floor(Math.random()* 255);
    let blue = Math.floor(Math.random()* 255);
    let color = `rgb(${red}, ${green}, ${blue})`;
    return color;
}























// // Event Handling in JS
// let  btn1= document.querySelector('#btn1');

// btn1.onclick = console.log('Button 1 clicked');

// // multi button same work --

// let btns = document.querySelectorAll('button');

// for (btn of btns) {
//     btn.onclick =  console.log('Button clicked');
// }

// // sayHello without () as it will execute the function
// //  immediately, we want to pass the reference of the 
// // function to the onclick event handler.

// for (btn of btns){
//     btn.onclick = sayHello;
// }

// function sayHello(){
//     alert('Hello');
// }

