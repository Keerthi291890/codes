#include<stdio.h>
int main()
{int n,rn,temp,sum=0;
printf("Enter n value\n");
scanf("%d",&n);
temp=n;
while(n<0)
{rn=n%10;
n=n/10;
sum+=rn*rn*rn;}
if(sum==temp) printf("%d is Armstrong",temp) ;
else printf("%d is not an Armstrong number",temp);
}

