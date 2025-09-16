#include<stdio.h>
int main()
{
 printf("Name -Atharv Saini\nSAP ID - 590028677\nCourseBCA\nBatch-B6");
 printf("\n--------------------------------\n");
int a,b,c,hypotenuse,perpendicular,base;
printf("Enter side1:");
scanf("%d",&a);
printf("Enter side2:");
scanf("%d",&b);
printf("Enter side3:");
scanf("%d",&c);
if((a>b)&&(a>c)){
 hypotenuse = a;
 perpendicular = b;
 base = c;
 }else if((b>a)&&(b>c)){
 hypotenuse = b;
 perpendicular = a;
 base = c;
 } if ((c>a)&&(c>b)){
 hypotenuse = c;
 perpendicular = a;
 base = b;
 }
if ((a+b>c)&&(a+c>b)&&(b+c>a))
{
printf("This triangle is valid\n");
}
if (((a+b)>c)||((b+c)>a)||((a+c)>b)){
if((a==b)&&(b==c)){
printf("This is an Equilateral triangle");
}else if((a==b)||(b==c)||(a==c)){
printf("This is an Isosceles triangle");
}else if((hypotenuse*hypotenuse)==(perpendicular*perpendicular)+
(base*base))
{
printf("This is an Right angled triangle");
}else
{
printf("This is an Scalene triangle");
 }
 }
return 0;
}