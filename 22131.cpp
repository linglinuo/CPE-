#include <iostream>
using namespace std;

int main()
{
	char n,m;
	while(cin.get(n))
	{
		if(n!='"')
		{
			cout << n;
		}
		else if(++m%2)
		{
			cout <<"``";
		}
		else
		{
			cout <<"''";
		}
		
	}
	return 0;
} 
