#include<stdio.h>
main()
{
float a,b,c,d,e,f,g,h,i;
printf("ENTER THE AMOUNT OF SUGAR:");
scanf("%f",&a);
printf("ENTER THE AMOUNT OF RICE:");
scanf("%f",&b);
printf("ENTER THE AMOUNT OF BREAD:");
scanf("%f",&c);
printf("ENTER THE AMOUNT OF MILK:");
scanf("%f",&d);
printf("ENTER THE PRICE OF 1KG SUGAR:");
scanf("%f",&e);
printf("ENTER THE PRICE OF 1KG RICE:");
scanf("%f",&f);
printf("ENTER THE PRICE OF 1PKT BREAD:");
scanf("%f",&g);
printf("ENTER THE PRICE OF 1L MILK:");
scanf("%f",&h);
i=(a*e)+(b*f)+(c*g)+(d*h);
if(i>500)
{i=(i/100)*95;
printf("\nTHE TOTAL AFTER DISCOUNT IS:%f",i);
}
else
printf("THE TOTAL IS:%f",i);	
}
