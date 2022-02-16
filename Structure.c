#include<stdio.h>
#include<string.h>

struct Emp
{
   int eid;
   char ename[20];
   float esal;
};
void main()
{
   struct Emp e1,e2;
    printf("Enter eid\n");
    scanf("%d",&e1.eid);
    printf("Enter ename\n");
getchar();
    gets(e1.ename);
    printf("Enter esal\n");
    scanf("%f",&e1.esal);

printf("Enter eid\n");
    scanf("%d",&e2.eid);
    printf("Enter ename\n");
getchar();
    gets(e2.ename);
    printf("Enter esal\n");
    scanf("%f",&e2.esal);

printf("Empolyees Details\n\n");
printf("eid=%d\nename=%s\nesal=%f\n\n",e1.eid,e1.ename,e1.esal);
printf("eid=%d\nename=%s\nesal=%f\n",e2.eid,e2.ename,e2.esal);
}