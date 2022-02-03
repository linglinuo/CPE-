#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char n[2000];
	int i;
	while(scanf("%s",&n)!=EOF&&n[0]!='0')
	{
		int a=0,b=0;
		for(i=0;n[i]!='\0';i++)
		{
			if(i%2==0)
			{
				a=a+(n[i]-'0');
			}
			else
			b = b+(n[i]-'0');
		}
		if(abs(a-b)%11==0)
		{
			printf("%s is a multiple of 11.\n",n);
		}
		else
		{
			printf("%s is not a multiple of 11.\n",n);
		}
	}
	return 0;
}
