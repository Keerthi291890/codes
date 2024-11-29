//to find factorial of a number
#include<stdio.h>
int main()
{int n,i=1,f=1;

printf("Enter n value:\n");
scanf("%d",&n);
 while(i<=n)
 {f*=i;
 i++;
 }
 printf("Factorial:%d\n",f);
 }
