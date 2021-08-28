#include<stdio.h>
int main()
{
	int n=1,i=1,p[10000],y=0;
	for(n=1;n<=10000;++n)
	{
		y=0;
		for(i=1;i<n;++i)
		{
			if(n%i==0)
			{
				y=y+i;
			}
		}
		if(y==n)
		{
			printf("P(%d)=%d\n",n,y);
		}
		
	}

	return 0;
}

