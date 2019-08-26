#include<stdio.h>
#define pi 3.14
main()
{
float r,a,c;
printf("ENTER THE RADIUS:");
scanf("%f",&r);
if (r<=5)
{a=(pi*r*r);
printf("the area of circle is:%f",a);	}	
else
{c=(2*pi*r);
printf("the circumference of circle is:%f",c);}
}
