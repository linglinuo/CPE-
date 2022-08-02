#include <iostream>
#include <string>
using namespace std;

int next_pos[1000001];

void getNext(string str){
    next_pos[0] = -1;
    int j = 0, k = -1;
    while(j < str.size()){
        if(k == -1 || str[j] == str[k]){
            next_pos[++j] = ++k;
        }
        else{
            k = next_pos[k];
        }
    }
}

int main(){
    string input;
    while(cin >> input){
        if(input == ".")
            break;

        getNext(input);
        int length = input.size();
        if(length % (length- next_pos[length]) == 0 && next_pos[length] != 0)
            cout << length / (length - next_pos[length]) << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}
