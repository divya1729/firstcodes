#include<stdio.h>
main()
{
float a,b,c,d,e,f;
printf("ENTER THE MARKS OBTAINED IN ENGLISH:");
scanf("%f",&a);
printf("\nENTER THE MARKS OBTAINED IN MATH:");
scanf("%f",&b);
printf("\nENTER THE MARKS OBTAINED IN PHYSICS:");
scanf("%f",&c);
printf("\nENTER THE MARKS OBTAINED IN CHEMISTRY:");
scanf("%f",&d);
printf("\nENTER THE MARKS OBTAINED IN optional subject:");
scanf("%f",&e);
f=((a+b+c+d+e)/500)*100;
printf("PERCENTAGE IS:%f",f);
if(f>=60)
printf("\nSTUDENT IS ALLOWED TO TAKE ADMISSION IN BTECH");
else
printf("\nSTUDENT IS NOT ALLOWED TO TAKE ADMISSION IN BTECH");
}
