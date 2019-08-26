#include<stdio.h>
main()
{
int a,b,c,d;
printf("enter three values");
scanf("%d%d%d",&a,&b,&c);
d=a*b+c;
printf("the value of d is %d",d);
d=a*b+c/a;
printf("\nthe value of d is %d",d);	
d=c/a+c*a;
printf("\nthe value of d is %d",d);
d=c/a*b;
printf("\nthe value of d is %d",d);
}
