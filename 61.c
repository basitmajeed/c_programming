//Store details of all the students of your class in an array of structure and then 
//display the same in a tabular format.

#include <stdio.h>
struct student
{
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    struct student s[100];
    int strength;
    printf("Enter Number of Students: ");
    scanf("%d", &strength);
    for(int i = 0; i < strength; i++)
    {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", &s[i].name);
        printf("Enter Roll Number of student %d: ", i+1);
        scanf("%d", &s[i].rollNo);
        printf("Enter Marks of student %d: ", i+1);
        scanf("%f", &s[i].marks);
        printf("\n");
    }
    printf("\n\n");
    printf("| NAME | ROLL NO | MARKS |");
    printf("\n");
    for(int i = 0; i < strength; i++)
    {
        printf("| %s |", s[i].name);
        printf(" %d ", s[i].rollNo);
        printf("| %f |", s[i].marks);
        printf("\n");
    }
}