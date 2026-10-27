#include<stdio.h>
struct student {
     int id;
     char name;
     float marks;
  };
  int main(){
       struct student s[3]={

   {1,"gowtham",85.7};
   {2,"shamil",75.5};
   {3,"tariq" ,65.6};
 };
 for(int i=0,i<3,i++);
   printf("%d %s %.1f\n",s[i].id,s[i].name,s[i].marks);
   return 0;
 }