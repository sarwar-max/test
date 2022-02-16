#include<stdio.h>
#include<string.h>

struct Student
{
  int sroll;
  char sname[20];
  char ssubj[20];
};
void main()
{
   struct Student s[20];
   int n,i,j;
   printf("How many Employee you want enter\n");
   scanf("%d",&n);

   for(i=0;i<n;i++){
   printf("Enter Student Roll-no\n");
   scanf("%d",&s[i].sroll);
   printf("Enter Student name\n");
   getchar();
   gets(s[i].sname);
   
printf("Enter All Subject\n");
for(j=0;j<3;j++){
  gets(s[j].ssubj);
}
}
   printf("\n");

  printf("All Students Details\n");
  for(i=0;i<n;i++){
  printf("StudentRoll-no.=%d\nStudentName=%s\n",s[i].sroll,s[i].sname);

  printf("Subject's\n");
  for(j=0;j<3;j++){
   printf(" %s\n",s[j].ssubj);
}
}
}
