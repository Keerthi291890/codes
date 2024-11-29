#include<stdio.h>
int x,p=1;
int factorial();
int main()
{printf("Enter the number:\n");
scanf("%d",&x);
factorial();
}
int factorial()
{ while(x)
{p=p*x;
x=x-1;}
printf("Factorial of the number %d\n",p);}
 
