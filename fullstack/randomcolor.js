let btn = document.querySelector("Button");
let div = document.querySelector("div");

btn.addEventListener("click", function() {
   let color=getRandomColor();
    div.style.backgroundColor=color;
    console.log("working");
});

function getRandomColor(){
    let red = Math.floor(Math.random() * 255);
    let green = Math.floor(Math.random() * 255);
    let blue = Math.floor(Math.random() * 255);
    let color = `rgb(${red}, ${green}, ${blue})`;
    return color;
}