//to print the bill
#include<stdio.h>
int main()
{float p1,p2,p3,p4,p5,sum;
printf("Enter the price of 5 items:");
scanf("%f%f%f%f%f",&p1,&p2,&p3,&p4,&p5);
sum=p1+p2+p3+p4+p5;
printf("items\t\tprice\nitem1\t\t%f\nitem2\t\t%f\nitem3\t\t%f\nitem4\t\t%f\nitem5\t\t%f\ntotal price=%f",p1,p2,p3,p4,p5,sum);
}

