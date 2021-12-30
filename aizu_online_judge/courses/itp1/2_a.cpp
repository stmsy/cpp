#include <iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_A
 */
int main() {
  int a, b;

  cin >> a >> b;

  if (a > b) cout << "a > b" << endl;
  else if (a < b) cout << "a < b" << endl;
  else cout << "a == b" << endl;

  return 0;
}
