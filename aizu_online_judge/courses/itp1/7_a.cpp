#include <iostream>

using namespace std;

/**
 *  https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_A
 */
int main() {
  int m, f, r;

  while (true) {
    cin >> m >> f >> r;

    if (m == -1 && f == -1 && r == -1) break;

    if (m == -1 || f == -1 || m + f < 30) cout << "F\n";
    else if (m + f >= 80) cout << "A\n";
    else if (m + f >= 65 && m + f < 80) cout << "B\n";
    else if (m + f >= 50 && m + f < 65) cout << "C\n";
    else if (m + f >= 30 && m + f < 50) {
      if (r >= 50) cout << "C\n";
      else cout << "D\n";
    }
  }

  return 0;
}
