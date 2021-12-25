#include <stdio.h>

int main()
{

    int i, arr[20], n, pos, ele; // K is unknown index of an array

    printf("Enter the size of an arrray:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array without insertion:");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("Enter the positiion to change :");
    scanf("%d",&pos);
    printf("Enter the number:");
    scanf("%d",&ele);
    for (i = n-1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos]= ele;
    
    //Printing new array : 

    printf("\nElement in array is : ");
    for(i=0;i<=n; i++)
    {
        printf("\n\n%d\t",arr[i]);
    }
}