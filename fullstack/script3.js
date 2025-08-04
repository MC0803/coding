let arr = [56,34,97,90,78,92,99,91,45,56];
let newarr = arr.filter((val)=>{
    return val>90;
});

console.log(newarr);

let n = prompt("Enter a number n");
let arr1 = [];
for(var i=0;i<n;i++){
    arr1[i-1] = i;
};

let newarr1 =arr1.reduce((prev,curr)=>{
    return prev+curr;
});

console.log(newarr1);

let newarr2 = arr1.map((val)=>{
    return val*val;
});
console.log(newarr2);

console.log("Product of allnumber in array");
let pro = arr1.reduce((prev,curr)=>{
    return prev*curr;
});
console.log(pro);
