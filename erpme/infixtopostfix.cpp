#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter an infix expression: ";
    cin.get(str,100);
    char stack[100];
    int top = -1;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == '('){
            stack[++top] = str[i];
        }
        else if(str[i] == ')'){
            while(top != -1 && stack[top] != '('){
                cout<<stack[top--];
            }
            top--;
        }
        else if(str[i] == '+' || str[i] == '-'){
            while(top != -1 && stack[top] != '('){
                cout<<stack[top--];
            }
            stack[++top] = str[i];
        }
        else if(str[i] == '*' || str[i] == '/'){
            while(top != -1 && (stack[top] == '*' || stack[top] == '/')){
                cout<<stack[top--];
            }
            stack[++top] = str[i];
        }
        else{
            cout<<str[i];
        }
    }
    while(top != -1){
    cout<<stack[top--];
    }
}