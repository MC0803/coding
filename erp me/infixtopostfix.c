#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    char stack[100];
    int top = -1;
    printf("Enter an infix expression: ");
    gets(str);
    printf("Postfix expression: ");
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == '('){
            stack[++top] = str[i];
        }
        else if(str[i] == ')'){
            while(top != -1 && stack[top] != '('){
                printf("%c", stack[top--]);
            }
            top--;
        }
        else if(str[i] == '+' || str[i] == '-'){
            while(top != -1 && stack[top] != '('){
                printf("%c", stack[top--]);
            }
            stack[++top] = str[i];
        }
        else if(str[i] == '*' || str[i] == '/'){
            while(top != -1 && (stack[top] == '*' || stack[top] == '/')){
                printf("%c", stack[top--]);
            }
            stack[++top] = str[i];
        }
        else{
            printf("%c", str[i]);
        }
    }
    while(top != -1){
        printf("%c", stack[top--]);
    }
    printf("\n");
    return 0;
}