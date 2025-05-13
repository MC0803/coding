#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return factorial(n-1)*n;
    }
}

int main(){
    int n;

    printf("Number to calculate factorial of:");

    scanf("%d",&n);

    printf("Factorial of %d is %d\n",n,factorial(n));
    return 0;
}