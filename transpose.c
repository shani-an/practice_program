#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter Row size: ");
    scanf("%d",&n);
    printf("Enter Column size: ");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter %dX%d matrix:\n",n,m);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of %dX%d matrix:\n",n,m);
    for(j = 0; j < m; j++)
    {
        for(i = 0; i < n; i++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}