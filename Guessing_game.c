#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n, count = 0;
    srand(time(0));
    int secret_num = (rand() % 100) + 1;
    do
    {
        printf("Enter number: ");
        scanf("%d",&n);
        if(n < 1 || n > 100)
        {
            printf("Please Enter number between 1 to 100\n");
            continue;
        }
        count++;
        if(n > secret_num)
        {
            printf("Number is high!\nPlease play again!\n");
            printf("\n");
        }
        else if(n < secret_num)
        {
            printf("Number is low!\nPlease play again!\n");
            printf("\n");
        }
        else 
        {
            printf("You won!\n");
            printf("you complet the game in %d attemps",count);
            printf("\n");
        }
    }while(n != secret_num);
    return 0;
}