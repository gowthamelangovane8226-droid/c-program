#include<stdio.h>
int main()
{
struct student

{
 int rollnumber;
 char name[20];
 float marks;
};
struct student s1={1,"abc",89.5};
printf("%d",s1.rollnumber);
return 0;
}