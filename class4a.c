#include<stdio.h>
main()
{
int age;
printf("enter age");
scanf("%d",&age);
if((age>18)||(age==18))
{
 printf("PERSON IS ELIGIBLE FOR VOTING");
}
else
{printf("person is not eligible for voting");}
}
