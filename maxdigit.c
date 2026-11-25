#include<stdio.h>
#include<limits.h>
int main()
{
    int n, rem,max = INT_MIN,min = INT_MAX,diff;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n > 0)
    {
        rem = n % 10;
        if(rem > max)
        {
            max = rem;
        }
        if(rem < min)
        {
            min = rem;
        }
        n = n / 10;
    }
    diff = max - min;
    printf("Max digit = %d\n",max);
    printf("Min digit = %d\n",min);
    printf("Difference = %d",diff);
    return 0;
}