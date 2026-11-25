#include<stdio.h>
int main()
{
    int a[8] = {1, 3, 4, 2, 5, 3, 6, 7};
    int i, j;
    for(i = 0; i< 8; i++)
    {
        for(j = i+1; j < 8; j++)
        {
            if(a[i] == a[j])
            {
                printf("Dublicate Element = %d",a[i]);
                break;
            }
        }
    }
    return 0; 
}