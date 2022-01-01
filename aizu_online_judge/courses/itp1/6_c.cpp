#include <iostream>

using namespace std;

/**
 *  https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_C
 */
int main() {
  int n, b, f, r, v;
  int i, j, k, l;
  int num[4][3][10] = {};

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> b >> f >> r >> v;
    num[b-1][f-1][r-1] += v;
  }

  for (j = 0; j < 4; j++) {
    for (k = 0; k < 3; k++) {
      for (l = 0; l < 10; l++) {
        cout << ' ' << num[j][k][l];
      }
      cout << '\n';
    }
    if (j < 3) cout << "====================\n";
  }

  return 0;
}
