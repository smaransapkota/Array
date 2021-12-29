// program to find the sum of first n natural number using recursion

#include <stdio.h>
int natu(int);
int main()
{
    int n;
    printf("Enter the n terms : ");
    scanf("%d",&n);
    printf("Sum of %d natural number is %d",n,natu(n));
}
int natu(int n)
{
    if(n == 1){
        return 1;
    }
    else{
        return n+natu(n-1);
    }
}

// n == 1
// 1

// n+ natu(n-1)

// 5+4+3+2+1
