//Store details (Roll No. and Marks) of all the students of your class in an array of structure 
//and then find the topper of the class.

#include <stdio.h>
struct student
{
    int rollNo;
    float marks;
};

int main()
{
    struct student s[100];
    int strength, topRoll;
    float top;
    printf("Enter Number of Students: ");
    scanf("%d", &strength);
    for(int i = 0; i < strength; i++)
    {
        printf("Enter Roll Number of student %d: ", i+1);
        scanf("%d", &s[i].rollNo);
        printf("Enter Marks of student %d: ", i+1);
        scanf("%f", &s[i].marks);
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < strength; i++)
    {
        if(s[i].marks > top)
        {
            top = s[i].marks;
            topRoll = s[i].rollNo;
        }
    }
    printf("The topper of class is Roll No.: %d with %f marks", topRoll, top);
}