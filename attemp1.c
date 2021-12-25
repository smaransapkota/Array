#include <stdio.h>

int main()
{
    int n, i, num[100];
    printf("Enter the array limit : ");
    scanf("%d", &n);
    printf("Enter the elements in array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Elements of array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}   