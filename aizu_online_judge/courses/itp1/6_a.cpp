#include <iostream>

using namespace std;

/**
 *  https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_A
 */
int main() {
  int n, i;

  cin >> n;

  int a[n];
  for (i = 0; i < n; i++) cin >> a[i];
  for (i = n-1; i >= 0; i--) {
    cout << a[i];
    if (i != 0) cout << ' ';
  }
  cout << endl;

  return 0;
}
