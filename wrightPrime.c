#include<stdio.h>
int main()
{
    int i, j, n, flag;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n < 1)
    {
        printf("Enter number greater than 1. ");
        return 0;
    }
    for(i = 2; i <= n; i++)
    {
        flag = 1;
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}