#define MAXSIZE 10
void push(int val)
{
    int top;
    if(top == MAXSIZE)
    {
        printf("Stack Overflow \n");
    }
    else{
        top = top + 1;
        stack[top] = val;
    }
};

MAXSIZE : maximum size of an stack

1. Start
2. Checks the overflow.
    top == MAXSIZE -1 "\0"
    {
        OVERFLOW & EXIT THE PROGRAM
    }
    else{
        top = top + 1;
        stack[top] = value;
    }
// read the element stack[top] = value; | insert the element to the top
5. Stop

    -----
    smaran <- top 
    -----
    29 (top)
    -----
    full
    -----
