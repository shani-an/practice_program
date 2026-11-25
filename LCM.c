#include<stdio.h>
int main()
{
    int i, a,b,lcm =1;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    for(i = (a > b ? a : b); ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("LCM = %d",lcm);
    return 0;
}