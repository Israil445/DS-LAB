#include<stdio.h>
#include<stdlib.h>

int MAXSIZE=10;
int stack[10];
int top=-1;

int isFull(){
    if(top==MAXSIZE)
       return 1;
    else
       return 0;   
}


int push(int data){
    if(!isFull()){
        top+=1;
        stack[top]=data;

    }
    else {
        printf(" stack over-flow \n");
    }
}

int isEmpty(){
    if(top==-1) return 1;
    else return 0;
}

int pop(){
    int data;
    if(!isEmpty()){
        data=stack[top];
        top-=1;
        return data;
    }

    else{
        printf("Stack is empty.\n");
    }
}

void print(){

    while(!isEmpty()){
        int data=pop();//top element of stack
        printf("%d ",data);

    }printf("\n");


}


int main()
{

   // push items on to the stack 
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);

   //printing stack values
   print();


    return 0;
}