#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    printf("Enter Array size: ");
    scanf("%d",&n);
    int a[n];
    int second_largest = INT_MIN;
    int max = INT_MIN;
    printf("Enter Array Elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            second_largest = max;
            max = a[i];
        }
        if(a[i] > second_largest && a[i] != max)
        {
            second_largest = a[i];
        }
    }
    if (n < 2)
    {
        printf("Second largest element does not exist.\n");
    }
    else
    {
        printf("Second Largest element = %d\n", second_largest);
    }

    return 0;
}