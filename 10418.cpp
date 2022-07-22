#include <iostream>
using namespace std;

int main()
{
	int n,m,cnt=1,num;
	char a[105][105];
	while(cin >> n >> m)
	{
		if(n==0&&m==0)
		{
			break;
		}
		for (int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin >> a[i][j];
			}
		}
		for(int i=0;i<m+1;i++)
		{
			a[n+1][i]='.'; 
		}
		for(int i=0;i<n+1;i++)
		{
			a[i][m+1]='.'; 
		}
		if(cnt!=1)
		{
			cout << endl;
		}
		for (int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				num=0;
				if(a[i][j]!='*')
				{
					if(a[i-1][j]=='*') num++;
					if(a[i+1][j]=='*') num++;
					if(a[i][j-1]=='*') num++;
					if(a[i][j+1]=='*') num++;
					if(a[i-1][j-1]=='*') num++;
					if(a[i-1][j+1]=='*') num++;
					if(a[i+1][j-1]=='*') num++;
					if(a[i+1][j+1]=='*') num++;
					a[i][j]=(char)num+'0';
				}
			}
		}
		cout << "Field #"<<cnt<<":"<<endl;
		cnt++;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout << a[i][j];
			} 
			cout<<endl;
		}
	}
	return 0;
}
