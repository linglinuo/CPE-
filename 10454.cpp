#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int a=0,b=0,s,d;
		cin >> s >> d;
		a=s+d;
		if(a%2==1)
		{
			cout << "impossible" <<endl;
			continue; 
		}
		a/=2;
		b=s-a;
		if(b<0)
		{
			cout << "impossible" <<endl;
			continue;
		}
		cout << a << " " << b <<endl;
	}
	return 0;
}
