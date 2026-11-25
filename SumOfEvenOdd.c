#include<stdio.h>
int main()
{
    int n,rem,sum = 0,sum1 = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n > 0)
    {
         rem = n % 10;
        if(rem % 2 == 0)
        {
            sum+=rem;
        }
        else
        {
            sum1+=rem;
        }
        n = n /10;
    }
    printf("Sum of even number = %d\n",sum);
    printf("Sum of odd number = %d",sum1);
    return 0;
}