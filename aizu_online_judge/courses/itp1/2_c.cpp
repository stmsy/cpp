#include <iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_C
 */
int main() {
  int a, b, c;
  int tmp;

  cin >> a >> b >> c;

  if (a > b) {
    tmp = b;
    b = a;
    a = tmp;
  }

  if (b > c) {
    tmp = c;
    c = b;
    b = tmp;
  }

  if (a > b) {
    tmp = b;
    b = a;
    a = tmp;
  }

  cout << a << " " << b << " " << c << endl;

  return 0;
}
