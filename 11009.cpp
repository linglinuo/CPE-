#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char a[100000],b[100000];
	int i,j;
	while(cin >> a >> b)
	{
		i=0;
		j=0;
		for(i=0 ; i < strlen(a);i++)
		{
			for(;a[i]!=b[j]&&j<strlen(b);j++);
			if(b[j]=='\0')
			{
				break;
			}
			j++;
		}
		if(a[i]=='\0')
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}

