#include <iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_B
 */
int main() {
  int i = 1, x;

  while (true) {
    cin >> x;
    if (x == 0) break;
    cout << "Case " << i << ": " << x << "\n";
    i++;
  }

  return 0;
}
