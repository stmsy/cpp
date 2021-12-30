#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_B
 */
int main() {
  double r;
  double pi = atan(1) * 4;

  cin >> r;

  cout << fixed;
  cout << setprecision(5);
  cout << pi * r * r  << " " << 2 * pi * r  <<  endl;

  return 0;
}
