
const API_URL = "https://official-joke-api.appspot.com/random_joke";
const btn1 = document.querySelector("#btn1");
const btn2 = document.querySelector("#btn2");
const para = document.querySelector("#para");
const img = document.querySelector("#img");

btn2.addEventListener("click", async () => {
    let res = await axios.get("https://dog.ceo/api/breeds/image/random");
    img.setAttribute("src", res.data.message);
})


btn1.addEventListener("click", async () => {
    let res = await getFacts();
    para.innerText = res.data.setup + " ... " + res.data.punchline;
});

const getFacts = async () => {
    let response = await axios.get(API_URL);
    return response;
};





