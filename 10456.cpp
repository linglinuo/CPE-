#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int cases,M,N,Q,x,y;
	char map[101][101];
	cin >> cases;
	while(cases--)
	{
		cin >> M >> N >> Q;
		cout << M << " " << N << " " << Q <<endl;
		for(int i=0;i<M;i++)
		{
			cin >> map[i];
		}
		while(Q--)
		{
			int ans,a,b;
			cin >> x >> y;
			ans = 1;
			for(int i=1;i<=M||i<=N;i++)
			{
				int flag=0;
				for(a=x-i;a<=x+i;a++)
				{
					for(b=y-i;b<=y+i;b++)
					{
						if(a<0||b<0||a>=M||b>=N)
						{
							flag = 1;
							break;
						}
						if(map[a][b]!=map[x][y])
						{
							flag = 1;
							break;
						}
					}
				}
				if(!flag)
				{
					ans+=2;
				}
				else
				{
					break;
				}
			}
			cout << ans <<endl;
		}
	}
	return 0;
}
