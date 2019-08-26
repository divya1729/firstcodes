#include<stdio.h>
main()
{
int km;
printf("ENTER KM");
scanf("%d",&km);
if(km<=10)
printf("the fare is:100");
else if((km<=20)&&(km>10))
printf("the fare is:200");
else if((km<=30)&&(km>20))
printf("the fare is:300");
else
printf("the fare is:1000");	
}
