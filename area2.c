#include<stdio.h>
main()
{
float r,l,b,s,h,B,a;	
printf("ENTER VALUE OF RADIUS:");
scanf("%f",&r);
a=3.14*(r*r);
printf("\nTHE AREA OF CIRCLE IS:%f",a);
printf("\nENTER VALUE OF LENGTH AND BREADTH:");
scanf("%f%f",&l,&b);
a=l*b;
printf("\nTHE AREA OF RECTANGLE IS:%f",a);
printf("\nENTER VALUE OF SIDE:");
scanf("%f",&s);	
a=s*s;
printf("\nTHE AREA OF SQUARE IS:%f",a);
printf("\nENTER VALUE OF BASE AND HEIGHT:");
scanf("%f%f",&B,&h);	
a=((float)1/2*(B*h));
printf("\nTHE AREA OF TRIANGLE IS:%f",a);	
}
