#include<stdio.h>
int main()
{	int number,p[10000],sum=0,i;
	printf("Enter the number : ");
	scanf("%d",&number);
	printf("%d->",number);
	for(i=1;number!=0;++i)
	{	
		p[i]=number%10;
		number=number/10;
		sum=sum+p[i];
	}
	if(sum>9)
	{ 	
		printf("%d->",sum);
		for(i=1;sum>9;++i)
		{ 
			p[i]=sum%10;
			sum=sum/10;
			sum=sum+p[i];
			if(sum>9)
			{ printf("%d->",sum);
			}
			else
			{ printf("%d",sum);
			}
		}
	}
	else
	{ 
		printf("%d",sum);
	}
	return 0;
}
