#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter your First number = ");
	scanf("%d",&a);
	
	printf("Enter your Second number = ");
	scanf("%d",&b);
	
	printf("Enter your Third number = ");
	scanf("%d",&c);
	
	printf("\n\n\n-------------------------------------------------------------------\n\n\n");
	
	if(a>b)
	{
		if(a>c)
		{
			printf("First number is max\n\n");
		}
		else
		{
			printf("Third number is max\n\n");
		}
	}
	else
	{
		if(b>c)
		{
			printf("Second number is max\n\n");
		}
		else
		{
			printf("Third number is max\n\n");
		}
	}
	return 0;
}