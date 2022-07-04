#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin >> a >> b)
	{
		cout << a << " " << b << " ";
		int temp=0;
		if(a>b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		int Max=0;
		for(int i=a;i<=b;i++)
		{
			int n = i,len = 1;
			while(1)
			{
				if(n==1)break;
				if(n%2==1)
				{
					n=n*3+1;
				}
				else
				{
					n=n/2;
				}
				len++;
			}
			Max=max(len,Max);
		}
		cout << Max <<endl;
	}
	return 0;
}
