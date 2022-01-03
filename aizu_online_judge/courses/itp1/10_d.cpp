#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/10/ITP1_10_D
 */
int main() {
  int n, i;
  double p1, p2, p3, pi, sum;

  cin >> n;

  int x[n], y[n];

  for (i = 0; i < n; i++) cin >> x[i];
  for (i = 0; i < n; i++) cin >> y[i];

  p1 = 0.0;
  for (i = 0; i < n; i++) {
    p1 += abs(x[i] - y[i]);
  }

  sum = 0.0;
  for (i = 0; i < n; i++) {
    sum += pow(abs(x[i] - y[i]), 2);
  }
  p2 = pow(sum, 1.0/2);

  sum = 0.0;
  for (i = 0; i < n; i++) {
    sum += pow(abs(x[i] - y[i]), 3);
  }
  p3 = pow(sum, 1.0/3);

  pi = abs(x[0] - y[0]);
  for (i = 1; i < n; i++) {
    if (pi < abs(x[i] - y[i])) pi = abs(x[i] - y[i]);
  }

  cout << fixed;
  cout << setprecision(8);
  cout << p1 << '\n';
  cout << p2 << '\n';
  cout << p3 << '\n';
  cout << pi << endl;

  return 0;
}
