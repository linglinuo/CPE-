#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	double x[4],y[4],ansx,ansy;
	while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3])
	{
		if(x[0]==x[2]&&y[0]==y[2])
		{
			ansx=x[1]-x[2]+x[3];
			ansy=y[1]-y[2]+y[3];
		}
		else if(x[1]==x[2]&&y[1]==y[2])
		{
			ansx=x[0]-x[2]+x[3];
			ansy=y[0]-y[2]+y[3];
		}
		else if(x[0]==x[3]&&y[0]==y[3])
		{
			ansx=x[1]-x[3]+x[2];
			ansy=y[1]-y[3]+y[2];
		}
		else
		{
			ansx=x[0]-x[3]+x[2];
			ansy=y[0]-y[3]+y[2];
		}
		printf("%.3lf %.3lf\n",ansx,ansy);
	}
	return 0;
}
