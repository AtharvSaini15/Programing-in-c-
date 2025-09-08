#include <stdio.h>
int main()
{
 printf("Name - Atharv Saini j\nSAP ID - 590028677\ncourse - BCA\nBatch -6");
 printf("\n----------------------\n");
 float L, B, A, P;
 printf("enter the length of the rectangle");
 scanf("%f",&L);
 printf("enter the breathe of the rectangle");
 scanf("%f",&B);
 //calculation
 A = L*B;
 P = 2*(L+B);
 //Result
 printf("area of rectangle = %.2f\n",A);
 printf("perimeter of rectangle = %.2f\n",P);
 return 0;
}