#include<stdio.h>
#include<string.h>
struct student
{
   char name[100];
   int roll;
   float cgpa;
};
int main()
{
    strcpy(name, "Vineesha");
    s1.roll=34;
    s1.cgpa=9.2;
    printf("The name = %s", s1.name);
    printf("The roll no is = %d", s1.roll);
    printf("The cgpa = %f", s1.cgpa);
    return 0;
}