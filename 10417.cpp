#include <iostream>
using namespace std;

int main()
{
	long long int people,day,area;
	while(cin >> people >>day)
	{
		while(day !=0)
		{
			day -= people;
			if(day <= 0)
            {
                cout<< people <<endl;
                break;
            }
            else
            {
            	people++;
			}
		}
	} 
	return 0;
}

