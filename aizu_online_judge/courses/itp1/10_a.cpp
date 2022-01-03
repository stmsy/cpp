#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/10/ITP1_10_A
 */
int main() {
  double x_1, y_1, x_2, y_2, d;

  cin >> x_1 >> y_1 >> x_2 >> y_2;

  d = sqrt(pow(x_1-x_2,2) + pow(y_1-y_2,2));

  cout << fixed;
  cout << setprecision(8);
  cout << d << endl;

  return 0;
}
