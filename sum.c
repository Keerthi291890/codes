//to find sum of series 1+2+3+4...n
#include<stdio.h>
int main()
{int i=1,sum=0,n;
 printf("Enter n value:\n");
 scanf("%d",&n);
 while (i<=n)
 { sum=sum+i;
  i++;
  
  }
  printf("sum:%d\n",sum);
  }

