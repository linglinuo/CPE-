#include<stdio.h>

int main()
{
	int t = 1;
	long long int num;
	while(scanf("%lld",&num) != EOF)
	{
		if(num == 0)
		{
			printf("%d. 0\n",t);
			t += 1;
			continue;
		}
		int now = -1,cnt = 0;
		int n[100];
		while(num > 0)
		{
			if(now == 0)
			{
				n[cnt] = num % 10;
				num /= 10;
				cnt += 1;
			}
			else
			{
				n[cnt] = num % 100;
				num /= 100;
				cnt += 1;
			}
			now = (now + 1) % 4;
		}
		now = (now + 3) % 4;
		printf("%d.",t);
		for(int i = cnt - 1;i > 0;i--)
		{
			switch(now)
			{
				case 0 :
				if(n[i] > 0)
				printf(" %d shata",n[i]);
				break;
				case 1 :
				if(n[i] > 0)
				printf(" %d hajar",n[i]);
				break;
				case 2 :
				if(n[i] > 0)
				printf(" %d lakh",n[i]);
				break;
				case 3 :
				if(n[i] > 0)
				printf(" %d kuti",n[i]);
				else
				printf(" kuti",n[i]);
				break;
			}
			now = (now + 3) % 4;
		}
		if(n[0] > 0)
		printf(" %d",n[0]);
		printf("\n");
		t += 1;
	}
	return 0;
}
