#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int n{}, f{}, tc{0};
  while (cin >> n >> f && (n != 0 || f != 0)) {
    int total[25]{0};
    char cost[21]{};
    while (n--) {
      cin >> cost;
      for (int i{(int)strlen(cost) - 1}, j{0}; i >= 0; --i, ++j) {
        total[j] += cost[i] - '0';
        for (int k{j}; total[k] > 9; ++k) {
          ++total[k + 1];
          total[k] -= 10;
        }
      }
    }

    int t_len{25};
    while (total[t_len - 1] == 0) --t_len;

    int quotient[25]{}, q_len{0}, dividend{0};
    for (int i{t_len - 1}; i >= 0; --i) {
      dividend = dividend * 10 + total[i];
      if (dividend >= f) {
        quotient[q_len++] = dividend / f;
        dividend %= f;
      } else {
        if (q_len > 0) ++q_len;
      }
    }

    cout << "Bill #" << ++tc << " costs ";
    for (int i{t_len - 1}; i >= 0; --i) cout << total[i];
    cout << ": each friend should pay ";
    if (q_len == 0) {
      cout << '0';
    } else {
      for (int i{0}; i < q_len; ++i) cout << quotient[i];
    }
    cout << "\n\n";
  }

  return 0;
}
