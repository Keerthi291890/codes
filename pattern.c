//program for reverse order of a number
#include<stdio.h>
int main()
{int a,rn=0;
 printf("Enter the number:\n");
 scanf("%d",&a);
 while (a)
 { rn= rn+a*10+a%10;
   a=a/10;}
   printf("%d\n",rn);
   }

