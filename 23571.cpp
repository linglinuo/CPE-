#include <iostream>
using namespace std;

int digit(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int primeAdd(int n)
{
	int sum = 0;
	int tmp = 0;
	for(int i=2;i*i<=tmp;i++)
	{
		while(tmp%i==0)
		{
			tmp/=i;
			sum+=digit(i);
		}
	}
	if(n!=tmp)
	{
		if(tmp!=1)
		{
			sum+=digit(tmp);
		}
		return sum;
	}
	else
		return 0;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int ans=n+1;
		while(1)
		{
			if(digit(ans)==primeAdd(ans))
			{
				break;
			}
			else
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
