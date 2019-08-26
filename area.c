#include<stdio.h>
main()
{
float r,l,b,s,h,B,a;	
printf("ENTER VALUE OF RADIUS LENGTH BREADTH SIDE HEIGHT BASE:");
scanf("%f%f%f%f%f%f",&r,&l,&b,&s,&h,&B);
a=3.14*(r*r);
printf("\nTHE AREA OF CIRCLE IS:%f",a);
a=l*b;
printf("\nTHE AREA OF RECTANGLE IS:%f",a);	
a=s*s;
printf("\nTHE AREA OF SQUARE IS:%f",a);	
a=((float)1/2*(B*h));
printf("\nTHE AREA OF TRIANGLE IS:%f",a);	
}
