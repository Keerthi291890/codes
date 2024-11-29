//converting secs to hours and minutes
#include<stdio.h>
int main()
{int sec;float hrs,min;
printf("Enter the secs in integer:");
scanf("%d",&sec);
min=sec/60;
hrs=sec/3600;
printf("Hours=%f\nminutes=%f\n",hrs,min);
}
