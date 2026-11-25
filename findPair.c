#include<stdio.h>
int main()
{
    int a[7] = {2, 7, 11, 15, 3, 8, 4};
    int i, j,target = 10;
    for(i = 0; i < 7; i++)
    {
        for(j = i +1; j < 7; j++)
        {
            if((a[i] + a[j]) == target)
            {
                printf("Pair %d,%d\n",a[i],a[j]);
                break;
            }
        }
    }
    return 0;
}