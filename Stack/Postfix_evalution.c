#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAXSIZE 100

int stack[MAXSIZE];
char postfix[MAXSIZE];
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


int post_eval()
{

    for(int i=0;i<strlen(postfix);i++){
        if(postfix[i]>='0' && postfix[i]<='9'){
            push(postfix[i]-'0');

        }
        else{
            int a=pop();

            int b=pop();


            switch(postfix[i]){
                case '+':
                    push(b+a);
                    break;
                case '-':
                    push(b-a);
                    break;
                case '*':
                    push(b*a);
                    break;

                case '/':

                    push(b/a);
                    break;

                case '^':
                    int ans=1;
                    for(int i=1;i<=a;i++){
                        ans*=b;
                    }

                    push(ans);
                    break;

            }
        }

    }

        return pop();

}


int main(){

    scanf("%s",postfix);

    int ans=post_eval();

    printf("%d\n",ans);


    return 0;

}
