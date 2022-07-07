#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int group,n,i,a;
	float p,pa;
	
	scanf("%d",&group);
	for(i=0;i<group;i++)
	{
		scanf("%d%f%d",&n,&p,&a);
		if(p<0.00001)
		{
			printf("0.0000\n");
		}
		else
		{
			pa=pow(1-p,a-1)*p/(1-pow(1-p,n));
			printf("%.4f\n", pa);
		}
	}
	
} 
