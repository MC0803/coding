// let gamenum = 25;
// usernum = prompt("Guess the number");

// while (usernum != gamenum) {
//     usernum = prompt("Guess again");
// }
// console.log("Game ended");

// let user = prompt("Enter your name");
// let username = "@" + user + user.length;
// console.log(`Your username is ${username}`);

//str.slice(startidx,endidx);

//let arr = [1,2,3,4,5,6,7];

//insert
//arr.splice(3,0,15);
//15 will be inserted at index 3 -- before 4

//replace
//arr.splice(3,1,15); 
// at index-3 it will be deleted, 15 will be replaced

//just delete items
//addEventListener.splace(3,2);
//from index 3 two items will be deleted i.e. 4,5

//arr.splaice(3) -- means delete everything after index 3

let arr = ["Bloomberg", "Amazon", "Microsoft", "IDM", "Google", "Netflix"];
let output = arr.slice(2, 4);
console.log(output);