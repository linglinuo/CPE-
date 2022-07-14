#include <iostream>
using namespace std;

int main()
{
	int cases, n, tmp;
	cin >> cases;
	while(cases--)
	{
		int b1=0, b2=0;
		cin >> n;
		tmp=n;
		for(int i=0;n>0;i++)
		{
			b1 += (n%2);
			n=n/2;
		}
		while(tmp>0)
		{
			int n=tmp%10;
			for(int i=0;n>0;i++)
			{
				b2 += (n%2);
				n=n/2;
			}
			tmp=tmp/10;
		}
		cout << b1 << " " << b2 <<endl;
	}
	return 0;
}
