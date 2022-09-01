#include <iostream>
using namespace std;

int main()
{
	int cases;
	cin >> cases;
	while(cases--)
	{
		int len,n;
		cin >> len >> n;
		int m=-100, M=-100;
		for(int i=0;i<n;i++)
		{
			int loc;
			cin >> loc;
			M = max(M,max(loc,len-loc));
			m = max(m,min(loc,len-loc));
		}
		cout << m << " " << M << endl;
	}
	return 0;
}
