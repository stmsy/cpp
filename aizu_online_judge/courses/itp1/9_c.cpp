#include <iostream>
#include <string>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/9/ITP1_9_C
 */
int main() {
  int n, i, point_t, point_h;
  string str_t, str_h;

  point_t = 0;
  point_h = 0;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> str_t >> str_h;
    if (str_t > str_h) point_t += 3;
    else if (str_t < str_h) point_h += 3;
    else {
      point_t += 1;
      point_h += 1;
    }
  }

  cout << point_t << ' ' << point_h << endl;

  return 0;
}
