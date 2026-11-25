#include<stdio.h>
int main()
{
    int a[9] = {1, 2, 3, 5, 6, 7, 8, 9, 10};
    int i, sum, arrsum = 0;
    int missing_num;
    sum = 10*(10 + 1)/2;
    for(i = 0; i < 9; i++)
    {
        arrsum += a[i];
    }
    missing_num = sum - arrsum;
    printf("Missing number = %d",missing_num);
    return 0;
}