#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct school
{
    char name[50];
    int roll;
    int age;
    int height;
    int weight;
};
int main()
{
    int numbers;
    printf("enter number of students");
    scanf("%d",&numbers);
    struct school s[500];
    for(int i=0;i<numbers;i++)
    {
        printf(" Roll No : ");
        scanf("%d",&s[i].roll);
        printf(" Name : ");
        scanf("%s",s[i].name);
        printf(" Age : ");
        scanf("%d",&s[i].age);
        printf(" Height : ");
        scanf("%d",&s[i].height);
        printf(" Weight : ");
        scanf("%d",&s[i].weight);
        printf("\n");
    }
    for(int i=0;i<numbers;i++)
    {
        printf("Roll No is : %d\n",s[i].roll);
        printf("Name is : %s\n",s[i].name);
        printf("Age is : %d\n",s[i].age);
        printf("Height is : %d\n",s[i].height);
        printf("Weight is : %d\n",s[i].weight);
        printf("\n");
    }
}
