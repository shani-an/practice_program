#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two number: ");
    scanf("%f %f",&a,&b);
    printf("Sum of two number = %g\n",a+b);
    printf("Difference of two number = %g\n",a-b);
    printf("Product of two number = %g\n",a*b);
    if(b != 0)
    {
        printf("Division of two number = %g\n",a/b);
    }
    else
    {
        printf("Not divisible by zero");
    }
    return 0;
}