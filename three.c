//largest among three numbers
#include<stdio.h>
int main()
{int x,y,z;
printf("Enter three numbers:");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z)
printf("%d is largest\n",x);
else if (y>z)
printf("%d is largest\n",y);
else printf("%d is largest\n",z);
}


