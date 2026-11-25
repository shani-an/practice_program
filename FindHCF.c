#include<stdio.h>
int main()
{
    int a,b,rem;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    while(b > 0)
    {
        rem = a % b; 
        a = b; 
        b = rem;
    }
    printf("GCD(HCF) = %d",a);
    return 0;
}