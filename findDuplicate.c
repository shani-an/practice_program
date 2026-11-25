#include<stdio.h>
int main()
{
    int a[8] = {1, 3, 4, 2, 5, 3, 6, 7};
    int i,sum = 0, duplicate;
    for(i = 0; i < 8; i++)
    {
        sum += a[i];
    }
    duplicate = sum - (7 *(7 +1)/2);
    printf("Duplicate number =%d",duplicate);
    return 0;

}