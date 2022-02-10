#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char a[2000]={0};
	char b[2000]={0};
	int i,j,k,l;
	int min;
	
	while(gets(a)&&gets(b))
	{
		int tableA[26]={0};
		int tableB[26]={0};
		for (i=0;i<strlen(a);i++)
		{
			tableA[a[i]-'a']++;
		}
		for (j=0;j<strlen(b);j++)
		{
			tableB[b[j]-'a']++;
		}
		for (k=0;k<26;k++)
		{
			if (tableA[k]!=0&&tableB[k]!=0)
			{
				if (tableA[k]<=tableB[k])
				{
					min = tableA[k];
				}
				else
				{
					min = tableB[k];
				}
				for(l=0;l<min;l++)
				{
					printf("%c",k+97);
				}
				
			}
		}
		printf("\n");
	}
	return 0;
}
