#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    int A[250]={0},B[250]={0};
    while(getline(cin,a))
    {
        getline(cin,b);
        for(int i = 0 ;i < a.length();i++)
            A[i] = a[a.length()-i-1] - '0';
        for(int i = 0 ;i < b.length();i++)
            B[i] = b[b.length()-i-1] - '0';
        int C[501]={0};
        for(int i = 0 ;i < a.length();i++)
        {
            for(int j = 0 ;j < b.length();j++)
            {
                int x = A[i] * B[j];
                C[i+j] += x;
                C[i+j+1] += C[i+j] / 10;
                C[i+j] = C[i+j] % 10;
            }
        }
        int key = a.length() + b.length();
        bool k = false;
        for(int i = key ;i >=0;i--)
        {
            if(C[i] != 0)
                k = true;
            if(k)
                cout << C[i];
        }
        cout << endl;
    }
    return 0;
}

