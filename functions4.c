#include<stdio.h>
int x;
int odd();
int main()
{ 
printf("Enter the number:\n");
scanf("%d",&x);
odd();
}
int odd()
{if (x%2==0) printf("The number is even:\n");
 else printf("The number is odd\n");
 }
