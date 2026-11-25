#include<stdio.h>
int main()
{
    int n, rem, sum = 0, product = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while( n > 0)
    {
        rem = n % 10;
        sum += rem;
        product *=rem;
        n = n /10;
    }
    printf("Sum of digit = %d\n",sum);
    printf("Product of digit = %d",product);
    return 0;
}