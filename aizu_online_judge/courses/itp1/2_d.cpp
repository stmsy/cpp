#include <iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_D
 */
int main() {
  int W, H, x, y, r;

  cin >> W >> H >> x >> y >> r;

  if (x > r && x + r < W && y > r && y + r < H) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
