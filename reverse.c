#include<stdio.h>
int main()
{
    int n, rev = 0,rem, temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    do
    {
        rem= temp % 10;
        rev = rev*10 + rem;
        temp = temp / 10;
        
    } while (temp > 0);
    printf("Reverse of %d = %d",n,rev);
    
    return 0;
}