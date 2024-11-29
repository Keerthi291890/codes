//to find grade of a person based on avg marks
#include<stdio.h>
int main()
{int avg;
printf("Enter average marks of the student:");
scanf("%d",&avg);
if(avg>80)
printf("A grade\n");
else if(avg>60&&avg<=80)
printf("B garde\n");
else if(avg>40&&avg<=60)
printf("C grade\n");
else printf("F grade\n");
}
