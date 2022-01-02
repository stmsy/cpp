#include <iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_D
 */
int main() {
  int n, m, l, i, j, k;

  cin >> n >> m >> l;

  int A[n][m];
  int B[m][l];
  long long C[n][l];

  for (i = 0; i < n; i++) {
    for (k = 0; k < m; k++) cin >> A[i][k];
  }

  for (k = 0; k < m; k++) {
    for (j = 0; j < l; j++) cin >> B[k][j];
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < l; j++) {
      C[i][j] = 0;  // Initialize the entry or indefinite otherwise
      for (k = 0; k < m; k++) C[i][j] += A[i][k] * B[k][j];
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < l; j++) {
      cout << C[i][j];
      if (j < l-1) cout << ' ';
      else cout << '\n';
    }
  }

  return 0;
}
