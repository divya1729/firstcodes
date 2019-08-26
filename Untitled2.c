#include<stdio.h>
int main()
{
int a,b,c; //DECLARTION
printf("ENTER FIRST VALUE"); //INPUT
scanf("%d",&a); //INPUT
printf("ENTER SECOND VALUE");
scanf("%d",&b);
c=a+=b;
printf("\nTHE VALUE OF A IS:%d",c);
c=a & b;
printf("\nTHE VALUE IS %d",c);
c=a-=b;
printf("\nTHE VALUE IS %d",c);
c=a | b;
printf("\nTHE VALUE IS %d",c);
c=a*=b;
printf("\nTHE VALUE IS %d",c);
c=a ^ b;
printf("\nFINAL VALUE IS %d",c);
}
