//check whether given inpu equation in balanced or not.
#include <stdio.h>
int top=-1;
#define size 10
void push(char c);
int pop();
int stack[size];
int main()
{
    char eq[50];
    printf("enter your equation: ");
    scanf("%s",eq);
    int i=0;
    while(eq[i]!='\0'){
       if(eq[i]=='('){
           push(eq[i]);
       }
       else if(eq[i]==')'){
           int res=pop();
           if(res==-1){
           break;
           }
       }
       i+=1;
    }
    if(top==-1)
    printf("balanced");
    else
    printf("not balanced");
    
    
}
void push(char c){
    
    stack[top++]=c;
}
int pop(){
    top-=1;
    if(top<-1){
        return -1;
    }
}
