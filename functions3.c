#include<stdio.h>
int x,y,z;
int maximum();
int main()
{printf("Enter three numbers:\n");
scanf("%d%d%d",&x,&y,&z);
maximum();
}
int maximum()
{if(x>y&&x>z) printf("%d is maximum\n",x);
 else if (y>z) printf("%d is maximum\n",y);
  else printf("%d is greater\n",z);
  }
