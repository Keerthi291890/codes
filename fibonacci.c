//fibonacci number
#include<stdio.h>
int main()
{int a=0,b=1,c,n;
printf("Enter the limit:");
scanf("%d",&n);
c=a+b;
printf("%d\t%d\t",a,b);
while(c<=n)
{printf("%d\t\n",c);
a=b;
b=c;
c=a+b;}
}
