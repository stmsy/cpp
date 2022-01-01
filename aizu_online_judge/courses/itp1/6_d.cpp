#include <iostream>

using namespace std;

/**
 *  https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_D
 */
int main() {
  int n, m, i, j;

  cin >> n >> m;

  int A[n][m] = {};
  int b[m] = {};
  int x[n] = {};

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) cin >> A[i][j];
  }

  for (j = 0; j < m; j++) cin >> b[j];

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) x[i] += A[i][j] * b[j];
  }

  for (i = 0; i < n; i++) cout << x[i] << '\n';

  return 0;
}
