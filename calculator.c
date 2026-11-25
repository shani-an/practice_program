#include<stdio.h>
int main()
{
    float a, b;
    char op;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    printf("Enter operator(+, -, /, *): ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
         printf("Total = %g",a+b);
         break;

        case '-':
         printf("Total = %g",a-b);
         break;

        case '*':
         printf("Total = %g",a*b);
         break;

        case '/':
         if(b != 0)
         {
            printf("Total = %g",a/b);
         }
         else{
            printf("Not divisible by zero");
         }
         break;
         default :
         printf("Invalid Operator."); 
    }
    return 0;
}