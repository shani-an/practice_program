#include<stdio.h>
int main()
{
    int n,rem,temp,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while (temp > 0)
    {
        rem= temp % 10;
        sum += rem * rem * rem;
        temp = temp / 10;
    }
    if(sum == n)
    {
        printf("%d is Armstrong.",n);
    }
    else{
        printf("%d is not Armstrong.",n);
    }
    return 0;
}