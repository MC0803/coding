let URL = "https://official-joke-api.appspot.com/random_joke";
const para = document.querySelector("#para");
const btn = document.querySelector("#btn");
    
const getFacts = async ()=>{
    let response = await fetch(URL);
    console.log(response);
    let data = await response.json();
    para.innerText = data.text;

}

btn.addEventListener("click", getFacts);