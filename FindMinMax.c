#include<stdio.h>
#include<limits.h>
int findMin(int *a, int x)
{ 
    int i;
    int min = INT_MAX;
    for(i = 0; i < x; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int findMax(int *a, int x)
{ 
    int i;
    int max = INT_MIN;
    for(i = 0; i < x; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf("Enter Array size: ");
    scanf("%d",&n);
    if(n <= 0)
    {
        printf("Invalid size:");
        return 0;
    }
    int a[n];
    printf("Enter %d Elements: ",n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min = findMin(a, n);
    int max = findMax(a, n);
    printf("Minimum element in this array = %d\n",min);
    printf("Maximum element in this array = %d",max);
    return 0;
}