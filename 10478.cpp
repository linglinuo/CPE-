#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int cases,n;
	char tmp[100];
	long long m[100][100];
	cin >> cases;
	int c=1,flag;
	while(c<=cases)
	{
		scanf("%s%s%d",tmp,tmp,&n);
		flag = 1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin >> m[i][j];
				if(m[i][j]<0)
				{
					flag = 0;
				}
			}
		}
		if (flag==1)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(m[i][j]!=m[n-1-i][n-1-j])
					{
						flag = 0;
						break;
					}
				}
			}
		}
		if (flag==0)
		{
			cout << "Test #" << c << ": Non-symmetric."<<endl;
		}
		else
		{
			cout << "Test #" << c << ": Symmetric."<<endl;
		}
		c++;
	}
	return 0;
}
