#include <iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5/ITP1_5_C
 */
int main() {
  int H, W;
  int i, j;

  while (true) {
    cin >> H >> W;

    if (H == 0 && W == 0) break;

    for (i = 0; i < H; i++) {
      for (j = 0; j < W; j++) {
        if ((i + j) % 2 == 0) cout << '#';
        else cout << '.';
        if (j == W-1) cout << '\n';
      }
    }

    cout << endl;
  }

  return 0;
}
