#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int stack[100],i,j,choice = 0,n,top=-1;
void push();
void pop();
void display();

void main()
{
    printf("Enter the value of stack : ");
    scanf("%d",&n);
    while(choice != 3){
    printf("Enter the choice \n1:push\n2:pop\n3:display");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;
        
        default:
            printf("Invalid choice\n");
    }
    };
}
void push()
{
    int val;
    if(top == n)
    {
        printf("Overflow");
    }
    else{
        printf("Enter the value: ");
        scanf("%d",&val);
        stack[top] = val;
        top = top + 1;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("underflow");
    }
    else{
        top = top - 1;
    }
}
void display()
{
    for(i = top; i>= 0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty");
    }
}
