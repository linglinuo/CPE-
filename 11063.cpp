#include <iostream>
using namespace std;

int main(){
    int n, check, tmp;
    int caseNum = 0;

    while (cin >> n){
        caseNum++;
        check = 1;

        int seq[n];
        for (int i = 0; i < n; i++){
            cin >> seq[i];
            if (seq[i] < 1){
                check = 0;
            }
            if (i != 0 && seq[i-1] >= seq[i]){
                check = 0;
            }
        }
        int sum[20001] = {0};

        if (check == 1){
            for (int j = 0; j < n; j++){
                for (int k = j; k < n; k++){
                    tmp = seq[j] + seq[k];
                    if (sum[tmp] == 0){
                        sum[tmp] = 1;
                    } else {
                        check = 0;
                        break;
                    }
                }
            }
        }

        if (check == 0){
            cout << "Case #" << caseNum << ": It is not a B2-Sequence." << endl;
        } else {
            cout << "Case #" << caseNum << ": It is a B2-Sequence." << endl;
        }
        cout << endl;
    }
    return 0;
}
