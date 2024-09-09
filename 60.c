//Store details of a student in a structure and then display the same.

#include <stdio.h>
struct student
{
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    struct student s;
    printf("Enter name of student: ");
    scanf("%s", &s.name);
    printf("Enter Roll Number of student: ");
    scanf("%d", &s.rollNo);
    printf("Enter Marks of student: ");
    scanf("%f", &s.marks);
    printf("Name of student: %s || Roll No.: %d || Marks: %f  ", s.name, s.rollNo, s.marks);
}