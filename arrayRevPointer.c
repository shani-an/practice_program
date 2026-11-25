#include<stdio.h>
int main()
{
    int i,a[5] = {10, 20, 30, 40, 50};
    int *start = a, *end = 4 + a;
    int temp;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    for(i =0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}