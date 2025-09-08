#include <stdio.h>
int main()
{
 printf("Name - Atharv Saini\nSAP ID - 590028677\ncourse - BCA\nBatch -6");
 printf("\n----------------------\n");
 float celsius, fahrenheit;
 printf("enter the temprature in celsius");
 scanf("%f",&celsius);
 // Formula
 fahrenheit = (celsius*9/5)+32;
 //Result
 printf("temprature in fahrenheit is = %.2f",fahrenheit);
 return 0;
}