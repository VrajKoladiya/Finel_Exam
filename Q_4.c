#include<stdio.h>

int main()
{
	float a,meter;
	
	printf("Enter your size of feet = ");
	scanf("%f",&a);
	
	meter = a*0.3048;
	
	printf("meter is = %.4f",meter);
	
	return 0;
}