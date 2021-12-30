#include <iostream>
#include <iomanip>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_A
 */
int main() {
  long long a, b;

  cin >> a >> b;

  cout << fixed;
  cout << setprecision(5);
  cout << a / b << " " << a % b << " " << (double)a / b << endl;

  return 0;
}
