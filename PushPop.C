/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int top=-1;
#define size 5
void push();
void pop();
void display();
int stack[size];
int main()
{
    int ch;
    do{
    printf("1.push\n2.pop\n3.display\n4.exit\n enter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:push();break;
        case 2:pop();break;
        case 3:display();break;
        default: printf("please enter correct choice");
    }
    
    }while(ch!=4);
    return 0;
}
void push(){
    int ele;
    printf("Enter a number to be pushed");
    scanf("%d",&ele);
    if(top==size){
        printf("stack is full/overflow");
    }
    else{
    stack[top++]=ele;
    }
    return;
}
void pop(){
    if(top==-1){
        printf("stack is empty/underflow");
        return;
    }
    int el;
    el=stack[top];
    top-=1;
    printf("%d got poped successfully",el);
    return;
}
void display(){
    if(top==-1){
        printf("stack is empty/underflow");
        return;
    }
    for(int i=0;i<=top;i++){
        printf("%d\n",stack[i]);
    }
    return;
}
