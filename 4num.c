#include<stdio.h>
main()
{
int a,b,c,d;
printf("enter four numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
if (a>b)
{if((a>c)&&(a>d))
{
printf("a is greater");}
else if(c>d)
{
printf("c is greater");}
else
{printf("d is greater");
}
	}
else
{if((b>c)&&(b>d))
{printf("b is greater");
}
else if(c>d)
{printf("c is greater");
}
else
{printf("d is greater");
}
		}		
	
}
