#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAXSIZE 100

char stack[MAXSIZE];
char postfix[MAXSIZE];
char infix[MAXSIZE];
int top=-1;

void push(int data){
    if(top==MAXSIZE){
        printf("Stack Overflow\n");
        return;
    }
    else{
        stack[++top]=data;
    }
}

int pop(){
    if(top==-1){
        printf("Underflow\n");
        return -1;
    }
    return stack[top--];
}

int isEmpty(){
    if(top==-1) return 1;
    else return 0;
}

void print(){

    while(!isEmpty()){
        int data=pop();//top element of stack
        printf("%d ",data);

    }printf("\n");



}

int precedence(char symbol){
    switch(symbol){
        case '^':
          return 3;

        case '/':
          return 2;

        case '*':
           return 2;

        case '+':
          return 1;

        case '-':
         return 1;

        default:
          return 0;


    }
}


void inToPost(){
    char symbol;
    char next;
    int j=0;

    for(int i=0;i<strlen(infix);i++){
        symbol=infix[i];
        switch(symbol){
            case '(':
                 push(symbol);
                 break;
            case ')':
                while((next=pop())!='('){
                    postfix[j++]=next;
                }

                break;

            case '+':
                 while(!isEmpty() && precedence(stack[top])>=precedence(symbol)){
                     postfix[j++]=pop();

                 }
                push(symbol);
                break;

            case '-':
                while(!isEmpty() && precedence(stack[top])>=precedence(symbol)){
                     postfix[j++]=pop();

                 }
                push(symbol);
                break;


            case '*':
                 while(!isEmpty() && precedence(stack[top])>=precedence(symbol)){
                     postfix[j++]=pop();

                 }
                push(symbol);
                break;

            case '/':
                 while(!isEmpty() && precedence(stack[top])>=precedence(symbol)){
                     postfix[j++]=pop();

                 }
                push(symbol);
                break;

            case '^':
                 while(!isEmpty() && precedence(stack[top])>=precedence(symbol)){
                     postfix[j++]=pop();

                 }
                push(symbol);
                break;


            default:
                postfix[j++]=symbol;




        }
    }

    while(!isEmpty()){
        postfix[j++]=pop();

    }
    postfix[j++]='\0';
}


int main(){

    scanf("%s",infix);
    inToPost();
    for(int i=0;postfix[i]!='\0';i++){
        printf("%c",postfix[i]);
    }printf("\n");


    return 0;

}

