#include <stdio.h>
int fact(int);

int main()
{
    int n, facto;
    // int fact(int n);
    printf("Enter the value of N : ");
    scanf("%d",&n);
    facto = fact(n);
    printf("Factorial is : %d", facto);
    return 0;
}
int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}