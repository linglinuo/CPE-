#include <iostream>
#include <algorithm> 
using namespace std;

int a,b;
bool compare(int x,int y)
{
	int xOdd=abs(x%2),yOdd=abs(y%2);
	if((x%b)!=(y%b))
	{
		return x%b<y%b;
	}
	else if(xOdd!=yOdd)
	{
		return xOdd>yOdd;
	}
	else if(xOdd)
	{
		return x>y;
	}
	else
	return x<y;
}

int main()
{
	int s[10005];
	while(cin>>a>>b)
	{
		cout << a <<" "<< b << endl;
		if(s==0)
		break;
		for(int i=0;i<a;i++)
		{
			cin >> s[i];
		}
		sort(s,s+a,compare);
		for(int j=0; j<a;j++)
		{
			cout <<s[j]<<endl;
		}
	}
	return 0;
}
