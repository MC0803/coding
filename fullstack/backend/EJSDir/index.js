const express = require("express");
const app = express();
const port = 8080;
const path = require("path");

app.listen(port,()=>{
    console.log(`listening on ${port}`);
});

app.set("views",path.join(__dirname,"views"));

app.get("/",(req ,res) => {
    res.render("home.ejs");
});

app.get("/ig/:username",(req ,res) => {
    //let followers = ["john_doe","jane_smith","cool_user123","travel_guru","foodie_lover"];
    let { username }= req.params;
    const instaData = require("./data.json");
    const data = instaData[username];
    if(!data){
         res.send("User not found");
    } else {
       console.log(data);
       res.render("insta.ejs",{ data });
    }
});

app.get("/rolldice",(req ,res) => {
    let DiceVal = Math.floor(Math.random() *6)+1;
    res.render("rolldice.ejs",{DiceVal});
});

app.set("view engine","ejs");