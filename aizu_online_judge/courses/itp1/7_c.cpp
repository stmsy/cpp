#include <iostream>

using namespace std;

/**
 *  https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_C
 */
int main() {
  int r, c, i, j;
  int r_sum, c_sum, total;

  cin >> r >> c;

  int sheet[r][c+1];

  for (i = 0; i < r; i++) {
    r_sum = 0;
    for (j = 0; j < c; j++) {
      cin >> sheet[i][j];
      r_sum += sheet[i][j];
    }
    sheet[i][c] = r_sum;
  }

  for (i = 0; i < r; i++) {
    for (j = 0; j < c+1; j++) {
      cout << sheet[i][j];
      if (j < c) cout << ' ';
      else cout << '\n';
    }
  }

  total = 0;
  for (j = 0; j < c; j++) {
    c_sum = 0;
    for (i = 0; i < r; i++) {
      c_sum += sheet[i][j];
    }
    cout << c_sum << ' ';
    total += c_sum;
  }

  cout << total << endl;

  return 0;
}
