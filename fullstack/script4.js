// let h2 = document.querySelector('h2');
// console.dir(h2); 

// let divs = document.querySelectorAll('.Box');
// console.log(divs);
// console.dir(divs);

// let newheading = document.createElement('h1');
// newheading.innerText = 'This is a new heading';

// let btn=document.querySelector('Button');
// btn.after(newheading);

// let newButton = document.createElement('Button');
// newButton.innerText = 'Click me!';
// newButton.style.backgroundColor = 'red';
// newButton.style.color = 'white';
// console.dir(newButton);

//let body = document.querySelector('Body');
// body.prepend(newButton);

//let para = document.querySelector('p');
//para.style.color = 'blue';
let modebtn = document.querySelector('#Mode');
let currMode = 'light';

modebtn.addEventListener('click',() =>{
    if(currMode == 'light'){
        currMode = 'dark';
        document.body.style.backgroundColor = 'black';
        document.body.style.color = 'white';
        //can also use ClassList.add('dark-mode');
        //and ClassList.remove('light-mode');
        //define a dark -mode inside css file
        //and add it to body,same for light mode

    }
    else{
        currMode = 'light';
        document.body.style.backgroundColor = 'white';
        document.body.style.color = 'black';
    }
    console.log(currMode);
})



