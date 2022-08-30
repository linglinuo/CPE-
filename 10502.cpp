#include <iostream>
using namespace std;

int ans[32];
int main()
{
	unsigned int cases,n;
	cin >> cases;
	while(cases--)
	{
		cin >> n;
		if(n==0)
		{
			cout << 10 <<endl;
			continue;
		}
		else if(n==1)
		{
			cout << 1 <<endl;
			continue;
		}
		int len=0;
		for(int d=9;d>=2;d--)
		{
			while(n%d==0)
			{
				n/=d;
				ans[len]=d;
				len++;
			}
		}
		if(n==1)
		{
			for(int i=len-1;i>=0;i--)
			{
				cout << ans[i];
			}
			cout <<endl;
		}
		else
		{
			cout << -1 <<endl;
		}
	}
	return 0;
}
