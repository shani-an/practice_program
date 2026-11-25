#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n % 2 == 0)
    {
        printf("this number is even");
    }
    else
    {
        printf("this number is odd");
    }
    return 0;
}