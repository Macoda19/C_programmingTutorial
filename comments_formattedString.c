#include <stdio.h>

void main()
{
	int x_int;
	printf("Enter the value of x_int\t");
	scanf("%d", &x_int);
	int half_x;
	half_x = x_int / 2;
	printf("half of %d is %d\n",x_int,half_x);
	float x_real = 103,half_xReal;
	printf("Enter the value of X_real\t");
	scanf("%f", &x_real);
	half_xReal= x_real/2;
	printf("half of %f (real) is %f",x_real,half_xReal);
}


