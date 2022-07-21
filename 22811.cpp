#include <iostream>
using namespace std;
int main()
{
	int cases;
	cin >>cases;
	while(cases--)
	{
		int train[100]={};
		int L,cnt=0;
		cin >> L;
		for(int i=0; i<L;i++)
		{
			cin >> train[i];
		}
		for(int i=0;i<L-1;i++)
		{
			for(int j=0;j<L-1-i;j++)
			{
				if(train[j]>train[j+1])
				{
					swap(train[j],train[j+1]);
					cnt++;
				}
			}
		}
		cout << "Optimal train swapping takes " << cnt << " swaps."<<endl;
	}
	return 0;
}
