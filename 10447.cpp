#include <iostream>
using namespace std;

int main()
{
	int cases,i=1;
	cin >> cases;
	while(cases--)
	{
		int x1,x2,y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int p1,p2;
		p1 = (x1+y1+1)*(x1+y1)/2+x1;
		p2 = (x2+y2+1)*(x2+y2)/2+x2;
		cout << "Case " << i << ": " << p2-p1 << endl;
		i++;
	}
	return 0;
}
