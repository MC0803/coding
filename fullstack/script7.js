let URL = "https://official-joke-api.appspot.com/random_joke";
const para = document.querySelector("#para");
const btn = document.querySelector("#btn");

const getFacts = async () => {
    try {
        const response = await fetch(URL);
        if (!response.ok) {
            throw new Error("Failed to fetch joke");
        }

        const data = await response.json();
        para.innerText = `${data.setup} ${data.punchline}`;
    } catch (error) {
        console.error(error);
        para.innerText = "Could not load joke.";
    }
};

btn.addEventListener("click", getFacts);