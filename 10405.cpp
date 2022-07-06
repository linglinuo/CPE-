#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int num[n]={0},count[n]={0};
		int jolly=1;
		for(int i=0;i<n;i++)
		{
			cin >>num[i];
			if(i>0)
			{
				int temp=abs(num[i]-num[i-1]);
				if(temp<n)
				{
					count[temp]++;
					if(count[temp]>1||temp==0)
					{
						jolly=0;
					}
				}
				else
				{
					jolly=0;
				}
			}
		}
		if(jolly==0)
		{
			cout << "Not jolly"<<endl;
		}
		else
		{
			cout << "Jolly"<<endl;
		} 
	}
} 
