#include <stdio.h>
#include <math.h>

float main()
	{
		float a,b,c,sum,sroot;

		printf("Type three numbers a, b  and c \n");
		printf("Type each value follow by an Enter key");
		
		printf("Input a :");
		scanf("%f", &a);
		
		printf("Input b :");
		scanf("%f", &b);
		
		printf("Input c :");
		scanf("%f", &c);
		sum = a+b+c;
		sroot = sqrt(sum);
		printf("a = %f b = %f c = %f \n", a,b,c);
		printf("\n The sqaure root of a + b + c is %f\n",sroot);
	}
