#include<stdio.h>
int main()
{int num,den,a,b,rem,gcd,lcm;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
num=(a>b)?a:b;
den=(a<b)?a:b;
rem=num%den;
while (rem)
{num=den;
den=rem;
rem=num%den;
}
gcd=den;
lcm=((a*b)/gcd);
printf("%d\n%d",gcd,lcm);
}


