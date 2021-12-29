#include<iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_B
 */
int main() {
  int a, b, c;

  cin >> a >> b >> c;

  if (a < b && b < c) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
