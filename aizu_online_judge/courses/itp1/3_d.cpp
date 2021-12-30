#include <iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_D
 */
int main() {
  int a, b, c;
  int i;
  int counter = 0;

  cin >> a >> b >> c;

  for (i = a; i <= b; i++) {
    if (c % i == 0) counter++;
  }

  cout << counter << endl;

  return 0;
}
