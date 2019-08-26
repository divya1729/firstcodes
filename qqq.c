#include<stdio.h>
main()
{
int a, b, c, d, e;
float per;
printf("ENTER MARKS OF EACH SUBJECT: ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
per=((float)(a+b+c+d+e)/500)*100;
printf("THE PERCENTAGE IS: %f", per);
}
