#include<stdio.h>
int main ()
{
    int a[9] = {2, 3, 2, 4, 2, 5, 2, 2, 7};
    int i,j,n=9,count;
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                
            }
        }
        if(count > n/2)
        {
            printf("Majority element = %d\n",a[i]);
            printf("%d",count);
            break;
        }
    }
    return 0;
}