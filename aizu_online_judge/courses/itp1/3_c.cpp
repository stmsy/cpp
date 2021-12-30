#include<iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_C
 */
int main() {
  int x, y;

  while (true) {
    cin >> x >> y;
    if (x == 0 && y == 0) break;
    if (x > y) cout << y << " " << x << "\n";
    else cout << x << " " << y << "\n";
  }

  return 0;
}
