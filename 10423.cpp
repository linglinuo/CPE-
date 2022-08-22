#include <stdio.h>
#include <math.h>
using namespace std;

int Min(int x,int y)
{
	if(x>y)
	{
		return y;
	}
	else
	{
		return x;
	}
}

int main()
{
	double L,W;
	double maxX,minX;
	while(scanf("%lf %lf",&L,&W)==2)
	{
		maxX = ((L+W)-sqrt(L*L-L*W+W*W))/6.0;
		minX = Min(L,W)*0.5;
		printf("%.3lf %.3lf %.3lf\n",maxX+(1E-6),0.0,minX+(1E-6));
	}
	return 0;
}
