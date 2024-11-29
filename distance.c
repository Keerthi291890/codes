//distance b/w two places
#include<stdio.h>
int main()
{float x1,y1,z1,x2,y2,z2,d,r,cost;
printf("Enter the coordinates of delhi:");
scanf("%f%f%f",&x1,&y1,&z1);
printf("Enter coordinates of Mumbai:");
scanf("%f%f%f",&x2,&y2,&z2);
printf("Enter cost of fuel per km");
scanf("%f",&r);
d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
cost=d*r;
printf("Distance between delhi and mumbai=%fkm\n",d);
printf("Fuel cost=%f Rs\n",cost);
}
 
