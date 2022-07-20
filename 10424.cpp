#include <cmath>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
#define PI acos(-1)

int main()
{
	double s,a,arc,chord;
	string unit;
	while(cin >> s >> a >> unit)
	{
		if(unit == "min")
		{
			a/=60;
		}
		s+=6440;
		if(a>180)
			a = 360-a;
		a = a * PI /180;
		arc =  a*s;
		chord = s*sin(a/2)*2;
		printf("%.6lf %.6lf\n",arc,chord);
	}
	return 0;
}
