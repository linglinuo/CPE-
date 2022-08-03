#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;
	map<string,int> dic;
	string s;
	while(m--)
	{
		int p;
		cin >> s >> p;
		dic[s]=p;
	}
	while(n--)
	{
		int ans=0;
		while(cin >> s&&s!=".")
		{
			ans+=dic[s];
		}
		cout << ans <<endl;
	}
	return 0;
}

