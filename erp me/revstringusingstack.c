#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    char stack[100];
    int top = -1;
    printf("Enter a string: ");
    gets(str);

    for(int i = 0; i < strlen(str); i++){
        stack[++top] = str[i];
    }
    
    printf("Reversed string: ");
    for(int i = top; i >= 0; i--){
        printf("%c", stack[i]);
    }
    printf("\n");
    return 0;
}