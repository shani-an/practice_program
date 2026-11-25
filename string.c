#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enetr a string: ");
    scanf("%s",str);
    int len = strlen(str);
    char *start = str, *end = len + str-1;
    int flag = 1;
    while(start < end)
    {
        if(*start != *end)
        {
            flag  = 0;
            break;
        }
        start++;
        end--;
    }
    if(flag == 1)
    {
        printf("This string is palindrome.");
    }
    else{
        printf("This string is not palindrome");
    }
    return 0;
}