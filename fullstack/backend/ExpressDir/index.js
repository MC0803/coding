const express = require('express');
const app = express();

let port = 8080; 

app.listen(port , ()=>{
    console.log(`Server is running on port ${port}`);
});

// app.use((req,res)=>{
//     console.log("Request received");
//     let code = "<h1>Fruits</h1> <ul><li>Apple</li><li>Banana</li><li>Mango</li></ul>";
//     res.send(code);
// });

app.get('/',(req,res)=>{
    res.send("Root folder");
});


// app.get('/:username/:id',(req,res)=>{
//     let {username,id} = req.params;
//     res.send(`Username is ${username} and ID is ${id}`);
// });

//search for eg   /search?q=apple
app.get('/search',(req, res)=>{
    console.log(req.query);
    let { q }= req.query;
    res.send(`Search query is ${q}`);
});

app.get('/mango', (req, res) => {
 console.log("Mango request received");
    res.send("Mango request received");
});

// * route to handle invalid requests or anything
//other than above specified paths
app.get(/.*/, (req, res) => {
 console.log("Invalid request received");
    res.send("Invalid request received");
});