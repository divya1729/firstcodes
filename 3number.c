#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{printf("a is grestest");
	}
	else if (b>c)
	{printf("b is gretest");
	}
	else{printf("c is greatest");
	}
}
