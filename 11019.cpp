#include <iostream>
#include <string>
using namespace std;

int main()
{
	string b;
	int a,up,n,s,w,e,down,tmp;
	while(cin >>a && a)
	{
		up=1;
		n=2;
		w=3;
		e=4;
		s=5;
		down=6;
		while(a--)
		{
			cin >> b;
			if(b=="north")
			{
				tmp=up;
				up=s;
				s=down;
				down=n;
				n=tmp;
			}
			if(b=="south")
			{
				tmp=up;
				up=n;
				n=down;
				down=s;
				s=tmp;
			}
			if(b=="east")
			{
				tmp=up;
				up=w;
				w=down;
				down=e;
				e=tmp;
			}
			if(b=="west")
			{
				tmp=up;
				up=e;
				e=down;
				down=w;
				w=tmp;
			}
		}
		cout << up <<endl;
	}
	return 0;
}
