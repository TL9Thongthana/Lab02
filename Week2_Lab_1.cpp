#include<stdio.h>
int main()
{
	int N, a=2;
	printf("Enter number : ");
	scanf("%d", &N);
	printf("Factoring Result : ");
	while (a<=N)
	{	
		if (N % a == 0)
		{
			printf("%d",a);
			N = N / a;
			a = 1;
		}	
		++a;
	
		if((N % a == 0)&&(a<N+1))
		{
			printf(" x ");
		}
	}
	
	return 0;
}

