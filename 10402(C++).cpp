#include <iostream>
using namespace std;

int main()
{
	char tmpc;
	int n;
	char c[26];
	int cnt[26];
	for(int i = 0;i < 26;i++)
	{
		cnt[i] = 0;
		c[i] = 'A' + i;
	}
	cin >> n;
	while(tmpc = getchar())
	{
		if(tmpc == '\n')
		{
			n -= 1;
			if(n == 0)
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
		cout << c[i] << " " << cnt[i]<<endl;
	}
	return 0;
} 
