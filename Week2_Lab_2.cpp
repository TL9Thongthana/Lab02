#include<stdio.h>
int main()
{
	int a,b,max,min,GCD;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	if(a>b)
	{
		max=a;
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}
	while(min!=0)
	{
		GCD=min;
		min=max%min;
		max=GCD;
	}
	
	printf("Greatest common divisor = %d",GCD);
	
	return 0;
}
