#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	long long int n,t;
	while(scanf("%lld",&n)!=EOF&&n!=0)
	{
		while(1)
		{
			t=0;
			while (n!=0)
			{
				t=t+(n%10);
				n=n/10;
			}
			if(t/10==0)
			break;
			else
			{
				n=t;
				t=0;
			}
		}
		printf("%lld\n",t);
	}
	return 0;
}
