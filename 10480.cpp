#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,sq;
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		{
			break;
		}
		int count=0;
		
		for(int i =a;i<=b;i++)
		{
			sq=sqrt(i);
			if(sq*sq==i)
			{
				count++;
			}
			
		}
		
		cout<<count<<endl; 
	}
	return 0;
}
