#include<stdio.h>

int main()
{
	int a,b,i;
	
	printf("Enter your number = ");
	scanf("%d",&a);
	
	b=a;
	i=a;
	if (a >= 0) 
	{
        do {
            b *= a;
            a--;
        } while (a > 0);

        printf("Factorial is = %d\n",b/i);
    }
	else 
	{
        printf("Factorial is not defined for negative numbers.\n");
    }
	
	return 0;
}

