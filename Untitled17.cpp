#include<stdio.h>
main()
{
int a,b,c;
printf("ENTER VALUES OF a and b");
scanf("%d%d",&a,&b);
c=a>>b;
printf("VALUE OF c is:%d");
printf("\n%d",sizeof(c));

}
