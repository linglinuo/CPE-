#include <iostream>
using namespace std;

int gcd(int x,int y)
{
	if(!x)  return y;
    if(!y)  return x;
    int t;
    while(x%y) {
        t = x, x = y, y = t%y;
    }
    return y;
}
int main()
{
	int v[1001];
	while(cin >> v[0],v[0])
	{
		int n=1,M,m;
		M=m=v[0];
		while(cin >> v[n],v[n])
		{
			M=max(M,v[n]);
			m=min(M,v[n]);
			n++;
		}
		int g=M-m;
		for(int i=0;i<n;i++)
		{
			g=gcd(v[i]-m,g);
		}
		if(g<0)
		{
			cout << g*(-1) <<endl;
		}
		else
		{
			cout << g <<endl;
		}
		
	}
	return 0;
}
