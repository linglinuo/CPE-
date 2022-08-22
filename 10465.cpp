#include <iostream>
using namespace std;

int main()
{
	int total,v0;
	while(cin >> total >> v0)
	{
		if(total==0&&v0==0)
		{
			break;
		}
		int n=0,max=0;
		for(int i=1;(double)total/i>v0;i++)
		{
			int len=-v0*i*i+total*i;
			if(len>max)
			{
				max=len;
				n=i;
			}
			else if(len==max)
			{
				n=0;
			}
		}
		cout << n << endl;
	}
	return 0;
}
