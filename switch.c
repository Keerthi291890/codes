//to make a calculator
#include<stdio.h>
int main()
{int a,b,c,choice;

printf("Enter a value:\n");
scanf("%d",&a);
printf("Enter b value:\n");
scanf("%d",&b);
printf("1.Multiplication\t2.Addition\t3.Subtraction\t4.Division");
printf("Choose an option\n");
scanf("%d",&choice);
switch(choice)
{
case 1: c=a+b;
         printf("the result is %d\n",c);
         break;
case 2: c=a-b;
         printf("the result is %d\n",c);
         break;
case 3:c=a*b;
         printf("the result is %d\n",c);
         break;
case 4:c=a/b;
         printf("the result is %d\n",c);
         break;
default : printf("invalid choice");         
}
}                           
