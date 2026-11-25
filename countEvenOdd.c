#include<stdio.h>
int main()
{
    int n, rem, even = 0, zero = 0, odd = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n > 0)
    {
        rem = n % 10;
        if(rem == 0)
        {
            even++;
            zero++;
        }
        else if(rem % 2 == 0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
        n = n /10;
    }
    printf("Even number = %d\n",even);
    printf("Zero = %d\n",zero);
    printf("Odd number = %d",odd);
    return 0;
}