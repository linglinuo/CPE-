#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a,b,temp,i,n,a1,b1;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		a1 = a;
		b1 = b;
		if(a>b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		int maxlen=0;
		for(i=a;i<=b;i++)
		{
			n = i;
			int count=1;
			while(1)
			{
				if(n==1)break;
				if(n%2==1)
				{
					n=n*3+1;
				}
				else
				{
					n=n/2;
				}
				count++;
			}
			if(count>maxlen)
			{
				maxlen = count;
			}
		}
		printf("%d %d %d\n",a1,b1,maxlen);
	}
	return 0;
}
