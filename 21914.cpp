#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string a,is1[100]={""};
    int i=0,t;
    int num,maxlen=0;
    while(getline(cin,a))
    {
    	is1[i]=a;
        if(is1[i].length()>maxlen)
        {
            maxlen=is1[i].length();
        }
        i++;
    }
     
    num=i;
     
    for(i=0;i<maxlen;i++)
    {
        int gap=0;
        for(t=num-1;t>=0;t--) 
        {
            if(i>=is1[t].length())
            {
                gap++;
            }
            else
            {
                while(gap>0)
                {
                    cout<<" ";
                    gap--;
                }
                cout<<is1[t][i];
            }
        }
        cout<<endl;
    }
    return 0;
}
