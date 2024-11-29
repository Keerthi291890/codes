//to find even number between 1 and 50
#include<stdio.h>
int main()
{int n,i=1,f=1;
printf("enter number");
scanf("%d",&n);
while (i<=n)
{f=f*i;
++i;
}
printf("factorial= %d\n",f);
}
