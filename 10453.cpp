#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int n,count=0;
	cin >> n;
	while((n--)!=0)
	{
		int a=0,b=0,x=0,sum=0;
		cin >> a;
		cin >> b;
		if(a%2==0)
			a++;
		if(b%2==0)
			b--;
		sum=(a+b)*((b-a)/2+1)/2;
		count++;
		cout << "Case "<< count <<": "<<sum<<endl;
	}
}
