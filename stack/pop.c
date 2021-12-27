
- for push ( checks overflow )
- for pop ( checks underflow )

1. Start
2. Check whether the stack is underflow or not.
    if(top < 0)
    {
        underflow and exit the program
    }
    else{
        remove top from the stack. and set the element to the variable as 
        store = stack[top]
        top = top - 1;
    }
    printf("REmoved element is : %d"store)

    nothing
    -------
    nothing
    -------
    nothing
    -------
    2 <- pop 
    --------

    