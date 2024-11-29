#include<stdio.h>
int main()
{int n,rn;
printf("Enter n value\n");
scanf("%d",&n);
while(n)
{rn=n%10;n=n/10;printf("%d\t",rn);}
}
