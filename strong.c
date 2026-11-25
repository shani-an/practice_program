#include<stdio.h>
int main()
{
    int i,n,rem,temp,sum = 0,fact;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while (temp > 0)
    {
        rem= temp % 10;
        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp = temp / 10;
    }
    if(sum == n)
    {
        printf("%d is strong.",n);
    }
    else{
        printf("%d is not strong.",n);
    }
    return 0;
}