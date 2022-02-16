#include <stdio.h>
// int fact(int n);
int fact(int n)
{
 int res;
 if (n == 0)
 {
  res = 1;
 }
 else
 {
  res = n * fact(n - 1);
 }

 return res;
};

int main()
{
 int n, res;
 printf("Enter a Number for Factoriala\n");
 scanf("%d", &n);
 res = fact(n);
 printf("Fact of %d is %d\n", n, res);
}
