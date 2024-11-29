//to find area and perimeter of a square with arguments and reutrn type
#include<stdio.h>
int s,a;
int area(int s);
int perimeter(int s);
int main()
{printf("Enter the side of the square\n");
scanf("%d",&s);
area(s);

printf("%d\n",a);
perimeter(s);
printf("%d\n",a);

}
int area(int s)
{a=s*s;
return a;}
int perimeter(int s)
{a=4*s; return a;}
