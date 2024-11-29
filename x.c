#include<stdio.h>
#include<math.h>
int main()
{int x,n,p=1,sum=1;
printf("Enter x value=");
scanf("%d",&x);
printf("Enter n value=");
scanf("%d",&n);
while(n<=p)
{if (p%2==0)
  sum+=pow(x,p);
  else sum-=pow(x,p);
  p++;
  }
  printf("sum=%d\t",sum);
  }


