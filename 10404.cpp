#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int n,m,carry,count;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		count = carry = 0;
		if (n==0 && m==0)
		break;
		while(n != 0 || m != 0 )
		{
			if(n%10+m%10+carry>=10)
			{
				count++;
				carry =1;
			}
			else
			{
				carry=0;
			}
			n = n/10;
			m = m/10;
		}
	if(count==0)
	printf("No carry operation.\n");
	else if(count==1)
	printf("1 carry operation.\n");
	else
	printf("%d carry operations.\n",count);
	}
	return 0;
} 
