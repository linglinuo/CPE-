#include <stdio.h>
#include <iostream>
using namespace std;

int n, x[105], y[105], jud, cnt1, cnt2;
int main()
{ 
	while (scanf("%d", &n)!=EOF && n)
	{
	for (int i=0; i<2*n; i++)
    	scanf("%d %d", &x[i], &y[i]);
    jud = 0;
    for (int i=-500; i<=500; i++)
		for (int j=-500; j<= 500; j++)
		{
        	cnt1 = cnt2 = 0;
        	for (int k=0; k<2*n; k++)
			{
          		if (x[k] * i + y[k] * j > 0)
            		cnt1++;
          		if (x[k] * i + y[k] * j < 0)
            		cnt2++;
        	}
        	if (!jud && cnt2 == cnt1 && cnt1 == n)
			{
          		printf("%d %d\n", i, j);
          		jud = 1;        
        	} 
      	} 
  	}    
	return 0;
}
