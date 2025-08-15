class user{
    constructor(name,email){
        this.name = name;
        this.email =email;
    }
    viewdata(){
        console.log(`Name ${this.name} and en=mail is ${this.email}`);
    } 
}  

class Admin extends user{
    constructor(name,email){
        super(name,email);
    }   
    editdata(name,email){
        console.log(`Name changed to ${this.name} and email changed to ${this.email}`);
    }
}

let user1 = new user("John","jhon@123");
let user2 = new user("Jane ","jane@123");
let user3 = new Admin("Admin","admin@123");