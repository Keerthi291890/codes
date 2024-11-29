//to print the series 
#include<stdio.h>
#include<math.h>
int main()
{double x,total=1;
int n,p=1;
printf("Enter x value:\n");
scanf("%lf",&x);
printf("Enter n value:\n");
scanf("%d",&n);
while(p<=n)
{
if(p%2==1)
total-=pow(x,p);
else total+=pow(x,p);
p++;
}
printf("Total:%.2lf\n",total);

}

