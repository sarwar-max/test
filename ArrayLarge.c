#include<stdio.h>
int main()
{
  int arr[50],n,i,large;
 printf("Enter the Size of Array\n");
 scanf("%d",&n);
 printf("Enter Elements in an Array\n");
  for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
}
large=arr[0];
for(i=1;i<n;i++){
  if(large < arr[i]){
    large = arr[i];
}
}
  printf("Bigest Number in Array is=%d\n",large);
}