#include <iostream>
#include <string>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/5/ITP1_5_D
 */
bool has_three(string a) {
  int i;

  for (i = 0; i < a.length(); i++) {
    if (a[i] == '3') return true;
  }

  return false;
}


int main() {
  int n, i;
  string a;

  cin >> n;

  for (i = 3; i <= n; i++) {
    a = to_string(i);
    if (i % 3 == 0 || has_three(a)) cout << ' ' << i;
  }

  cout << endl;

  return 0;
}
