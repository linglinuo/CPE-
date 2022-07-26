#include <iostream>
using namespace std;

int main()
{
	int n,sum=0, extra=0;
	while(cin >> n)
	{
		sum=n;
		while(n>=3)
		{
			extra=n%3;
			n/=3;
			sum+=n;
			n+=extra;
		}
		
		if(n==2)
		{
			sum++;
		}
		cout << sum<<endl;
	}
	return 0;
}
