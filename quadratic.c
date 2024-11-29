#include<stdio.h>
int main()
{float a,b,c,d;
printf("Enter coefficient a: ");
scanf("%f",&a);
printf("Enter coefficient b: ");
scanf("%f",&b);
printf("Enter coefficient c:  ");
scanf("%f",&c);
d=b*b-4*a*c;
printf("Discriminant=%f\n",d);
if(d==0)
{printf("equation has equal roots\n");
printf("score: 0 points\n");}
else if(d>0)
{printf("equation has real roots\n");
printf("score: 20 points\n");}
else
{printf("equation ha imaginary roots\n");
printf("score: 10 points\n");}
}


