//calculating monthly pay
#include<stdio.h>
int main()
{float hr,rate,weeks,mp;
printf("Enter rate per hr:");
scanf("%f",&rate);
printf("Enter no.of.hours worked in a week:");
scanf("%f",&hr);
printf("Enter no.of.weeks in the month:");
scanf("%f",&weeks);
mp=hr*rate*weeks;
printf("Monthly pay of the employee:%f\n",mp);
}

