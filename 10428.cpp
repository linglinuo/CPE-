#include <iostream>
using namespace std;

int tmp[1000000];
int main()
{
	for (int i=2;i<1000;i++)
	{
		if(tmp[i])
		{
			continue;
		}
		for (int j=i+i;j<1000000;j+=i)
		{
			tmp[j]=1;
		}
	}
	int n,turn;
	while(cin >> n)
	{
		int start=n;
		for(turn=0;n;n/=10)
		{
			turn = turn*10 + (n%10);
		}
		if(tmp[start])
		{
			cout << start << " is not prime.";
		}
		else if(tmp[turn])
		{
			cout << start << " is prime.";
		}
		else if(start == turn)
		{
			cout << start << " is prime.";
		}
		else
		{
			cout << start << " is emirp.";
		}
		cout <<endl;
	}
	return 0;
}
