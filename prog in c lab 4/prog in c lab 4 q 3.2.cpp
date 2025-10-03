#include <stdio.h>
int main()
{
printf("Name - Atharv Saini\nSAP ID -590028677\nCourse-BCA\nBatch-B6");
printf("\n--------------------------------\n");
int year, totalYears, leapYears, nonLeapYears,
totalDays, dayIndex;
char dayName[10];
printf("Enter a year: ");
scanf("%d", &year);
totalYears = year - 1;
leapYears = totalYears / 4 - totalYears / 100 + totalYears
/ 400;
nonLeapYears = totalYears - leapYears;
totalDays = leapYears * 366 + nonLeapYears * 365 + 1;
dayIndex = totalDays % 7;
if(dayIndex == 0)
printf("The day on 01 January %d was Monday.\n",
year);
else if(dayIndex == 1)
printf("The day on 01 January %d was Tuesday.\n",
year);
else if(dayIndex == 2)
printf("The day on 01 January %d was Wednesday.\n",
year);
else if(dayIndex == 3)
printf("The day on 01 January %d was Thursday.\n",
year);
else if(dayIndex == 4)
printf("The day on 01 January %d was Friday.\n", year);
else if(dayIndex == 5)
printf("The day on 01 January %d was Saturday.\n",
year);
else
printf("The day on 01 January %d was Sunday.\n",
year);
return 0;
}
