#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int a[1000000];

void derivative(int length,int x){
	long long int sum=0,exp=1;
	
	for(int i=length-1;i>=0;i--){
		sum+=a[i]*exp*(length-i);
		exp*=x;
		
	}
	cout<<sum<<endl;
}
int main () {
	int x,n;
	while(scanf("%d",&x)!=EOF){
		for(n=0;;n++){

			scanf("%d",&a[n]);
			if(getchar()=='\n'){
				break;
			}
		}
		derivative(n,x);
	}



}
