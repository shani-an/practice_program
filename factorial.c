#include<stdio.h>
int main()
{
    int n, i = 1;
    unsigned long long fact = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n < 0)
    {
        printf("please enter positive number");
        return 0;
    }
    while( i <= n)
    {
        fact*=i;
        i++;
    }
    printf("Factorial of %d = %lld",n,fact);
    return 0;
}