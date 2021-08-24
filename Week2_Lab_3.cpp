#include<stdio.h>
int main()
{
	int N,i=1,j=1;
	scanf("%d", &N);
	while (i <= N)
	{
		if(i==1||i==N)
		{ 	int j=1;
			while (j <= N)
			{
				printf("*");
				j = j + 1;
			}
		}
		else
		{	printf("*");
			int j=1;
			while (j <= N-2)
			{
				printf(" ");
				j = j + 1;
			}
			printf("*");
		}
		printf("\n");
		i = i + 1;
	}
	return 0;
}
