#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/10/ITP1_10_B
 */
int main() {
  const double PI = acos(-1);
  int a, b, C;
  double rad, S, c, L, h;

  cin >> a >> b >> C;

  rad = C * PI / 180;
  S = a * b * sin(rad) / 2;
  c = sqrt(pow(a,2) + pow(b,2) - 2*a*b*cos(rad));
  L = a + b + c;
  h = 2 * S / a;

  cout << fixed;
  cout << setprecision(8);
  cout << S << '\n';
  cout << L << '\n';
  cout << h << endl;

  return 0;
}
