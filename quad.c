// cw coleman
// compile gcc input.c -o input -lm
#include <stdio.h>
#include <math.h>
float discriminant(float a, float b, float c);

float main()
	{
		float a,b,c,d,x1,x2;
		float a1,b1,a2,b2;
		
	    printf("Type three numbers a, b  and c \n");
		printf("Type each value follow by an Enter key\n");
		
		printf("Input a :");
		scanf("%f", &a);
		
		printf("Input b :");
		scanf("%f", &b);
		
		printf("Input c :");
		scanf("%f", &c);
		
		d = discriminant(a,b,c);
		printf("\t The discriminant %f\n",d);
		if( d < 0){
			printf ("\tImaginary Roots\n");
			d = d * -1;
			a1 = (-1 * b)/ (2 * a);
			b1 = sqrt(d) / (2*a);
			
			a2 = (-1 * b)/ (2 * a);
			b2 = -1 * sqrt(d) / (2*a);
			
			printf("\t Imaginary Root %f + %f i\n",a1,b1);
			printf("\t Imaginary Root %f + %f i\n",a2,b2);
		}else{
			printf ("\tReal Roots\n");
			x1 = (-1*b + sqrt(d))/(2*a);
			x2 = (-1*b - sqrt(d))/(2*a);
			printf("\t Roots %f and %f\n",x1,x2);
			
		}
		
			
		
	}

float discriminant (float a, float b, float c){
		float d = b*b - 4 * a *c;
		return d;
}
