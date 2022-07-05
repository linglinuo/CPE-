#include<stdio.h>

int main()
{
	char tmpc;
	int t;
	char c[26];
	int cnt[26];
	for(int i = 0;i < 26;i++)
	{
		cnt[i] = 0;
		c[i] = 'A' + i;
	}
	scanf("%d\n",&t);
	while(tmpc = getchar())
	{
		if(tmpc == '\n')
		{
			t -= 1;
			if(t == 0)
			break;
		}
		if(tmpc >= 'A' && tmpc <= 'Z')
		{
			cnt[tmpc - 'A'] += 1;
		}
		else if(tmpc >= 'a' && tmpc <= 'z')
		{
			cnt[tmpc - 'a'] += 1;
		}
	}
	for(int i = 0;i < 25;i++)
	{
		for(int j = i + 1;j < 26;j++)
		{
			if(cnt[i] < cnt[j])
			{
				int tmp;
				tmp = cnt[i];
				cnt[i] = cnt[j];
				cnt[j] = tmp;
				tmpc = c[i];
				c[i] = c[j];
				c[j] = tmpc;
			}
			else if(cnt[i] == cnt[j])
			{
				if(c[i] > c[j])
				{
					int tmp;
					tmp = cnt[i];
					cnt[i] = cnt[j];
					cnt[j] = tmp;
					tmpc = c[i];
					c[i] = c[j];
					c[j] = tmpc;
				}
			}
		}
	}
	for(int i = 0;i < 26;i++)
	{
		if(cnt[i] == 0) break;
		printf("%c %d\n",c[i],cnt[i]);
	}
	return 0;
}
