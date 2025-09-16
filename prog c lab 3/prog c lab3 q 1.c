#include<stdio.h>
int main()
{
 printf("Name - Atharv Saini\nSAP ID - 590028677\nCourseBCA\nBatch-B6");
 printf("\n--------------------------------\n");
int n,x;
printf("Enter a number:");
scanf("%d",&n);
x=(n%2);
if(x==0)
{
printf("%d is Even number",n);
}else{
printf("%d is Odd number",n);
 }
 return 0;
}