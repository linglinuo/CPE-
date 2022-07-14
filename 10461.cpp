#include <iostream>
using namespace std;

int main()
{
	int  n,i;
	while(cin >> n && n)
	{
		int a[200],b1=0;
		for(i=0; n>0; i++)    
	    {    
	    	b1 += (n%2);
	        a[i]=n%2;
	        n= n/2;
	    }
	    cout << "The parity of ";
	    for(i=i-1 ;i>=0 ;i--)    
	    {    
	        cout << a[i];
	    }
	    cout << " is " << b1 << " (mod 2)." <<endl;
	}
	return 0;
}
