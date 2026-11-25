#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
};
int main ()
{
    struct student s[3];
    int i,topper = 0;
    for(i = 0; i < 3; i++)
    {
        printf("%d. Enter Student detail\n",i+1);

        printf("   Enter Name: ");
        scanf("%s",s[i].name);

        printf("   Enter Roll num: ");
        scanf("%d",&s[i].roll);

        printf("   Enter Marks: ");
        scanf("%f",&s[i].marks);

        printf("\n");
    }
    for(i = 0; i < 3; i++)
    {
        if(s[i].marks > s[topper].marks)
        {
            topper = i;
        }
    }
    printf("Topper Details.\n");
    printf("NAME = %s\n",s[topper].name);
    printf("ROLL NUMBER = %.2d\n",s[topper].roll);
    printf("MARKS = %.2f",s[topper].marks);
    return 0;
}