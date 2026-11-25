#include<stdio.h>
int main(){
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n < 1)
    {
        printf("Enter number greater than 1. ");
    }
    else
    {
        for(i = 2; i*i < n/2; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
            }
        }
        if(flag == 1)
        {
            printf("This is a prime number.");
        }
        else
        {
            printf("This is not a prime number.");
        }
    }
    return 0;
}