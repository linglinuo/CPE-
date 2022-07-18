#include <iostream>
using namespace std;

int main()
{
	int h[100];
	int cases,n,p;
	cin >> cases;
	while(cases--)
	{
		cin >> n >> p;
		int day[3651];
		for(int i=0;i<=3650;i++)
		{
			day[i]=0;
		}
		for(int i=0;i<p;i++)
		{
			cin >> h[i];
			for(int j=h[i];j<=n;j+=h[i])
			{
				day[j]=1;
			}
		}
		int count=0;
		for(int j=1;j<=n;j++)
		{
			if(j%7==6 || j%7==0)
			{
				continue;
			}
			if(day[j]==1)
			{
				count++;
			}
		}
		cout <<count<<endl;
	}
	return 0;
} 
