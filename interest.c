//to find simple and compound interest
#include<stdio.h>

int main()
{float p,n,r,si;
printf("Enter principle amount:");
printf("Enter time:");
printf("Enter rate of interest:");
scanf("%f%f%f",&p,&n,&r);
si=(p*n*r)/100.0;

printf("Simple interest=%f\n",si);
}
