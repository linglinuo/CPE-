#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int n,i,a[1000],t,temp,j,sum;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&t);
		for(i=0;i<t;i++)
		{
			scanf(" %d",&a[i]);
		}
		for(i=0;i<t;i++)
		{
			for(j=0;j<t-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1]=temp;
				}
				
			}
		}
		sum = 0;
		temp = a[t/2];
			for(i=0;i<t;i++)
			{
				sum = sum + abs(a[i]-temp);
			} 
		printf("%d\n",sum);
	}
	return 0;
}
