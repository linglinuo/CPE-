#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char input;
	char pt[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	while((input = getchar())!=EOF)
	{
		if(input==' '||input=='\n')
		{
			putchar(input);
			continue;
		}
		int i;
		for(i=0;input!=pt[i];i++);
		putchar(pt[i-2]);
	
	    
	}
	
    return 0;
}
