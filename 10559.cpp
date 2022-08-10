#include <iostream>
using namespace std;

int ans[1001];
int tmp[3000]={1};
int main()
{
	for(int i=1;i<=1000;i++)
	{
		for(int j=0;j<3000;j++)
		{
			tmp[j]*=i;
		}
		for(int j=0;j<3000;j++)
		{
			tmp[j+1]+=tmp[j]/10;
			tmp[j]%=10;
		}
		for(int j=0;j<3000;j++)
		{
			ans[i]+=tmp[j];
		}
	} 
	int x;
	while(cin >> x)
	{
		cout << ans[x] << endl;
	}
	return 0;
}
