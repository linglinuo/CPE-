#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
using namespace std;

int main()
{
	int n, m, maxx;
	int cases=0;
	string answer,output;
	string input;
	bool accept,presentation;
	
	while(cin >> n && n != 0)
	{
		getchar();
		answer = "";
		output = "";
		for(int i=0;i<n;i++)
		{
			getline(cin,input);
			if(i)
			{
				answer += '\n';
				answer += input;
			}
			else
			{
				answer=input;
			}
		}
		cin >> m;
		getchar();
		for(int i=0;i<m;i++)
		{
			getline(cin,input);
			if(i)
			{
				output += '\n';
				output += input;
			}
			else
			{
				output=input;
			}
		}
		accept = true;
		if(answer !=output)
		{
			accept = false;
		}
		if(accept)
		{
			cases++;
			cout << "Run #" << cases << ": Accepted" << endl;
			continue;
		}
		presentation = true;
		for(int i=0;i<answer.length();i++)
		{
			if(!isdigit(answer[i]))
			{
				answer.erase(i,1);
				i--;
			}
		}
		for(int i=0;i<output.length();i++)
		{
			if(!isdigit(output[i]))
			{
				output.erase(i,1);
				i--;
			}
		}
		maxx = max(m,n);
		if(answer != output)
		{
			presentation = false;
		}
		if(presentation)
		{
			cases++;
			cout << "Run #" << cases << ": Presentation Error" << endl;
			continue;
		}
		cases++;
		cout << "Run #" << cases << ": Wrong Answer" << endl;
	}
	return 0;
}
