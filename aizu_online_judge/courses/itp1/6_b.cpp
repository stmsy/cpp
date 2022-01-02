#include <iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B
 */
int main() {
  int n, i, j, k;
  char suit;
  int rank;
  int deck[4][13] = {};

  cin >> n;
  // 'S': 0, 'H': 1, 'C': 2, 'D': 3
  for (i = 0; i < n; i++) {
    cin >> suit >> rank;
    if (suit == 'S') deck[0][rank-1] = 1;
    else if (suit == 'H') deck[1][rank-1] = 1;
    else if (suit == 'C') deck[2][rank-1] = 1;
    else if (suit == 'D') deck[3][rank-1] = 1;
  }

  for (j = 0; j < 4; j++) {
    for (k = 0; k < 13; k++) {
      if (!deck[j][k]) {
        if (j == 0) cout << 'S';
        else if (j == 1) cout << 'H';
        else if (j == 2) cout << 'C';
        else if (j == 3) cout << 'D';
        cout << ' ' << k+1 << '\n';
      }
    }
  }

  return 0;
}
