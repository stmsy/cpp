#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/10/ITP1_10_C
 */
int main() {
  int n, i, sum;
  double mean, var, sd;

  while (true) {
    cin >> n;

    int s[n];

    if (n == 0) break;

    sum = 0;
    for (i = 0; i < n; i++) {
      cin >> s[i];
      sum += s[i];
    }

    mean = (double)sum / n;

    var = 0.0;
    for (i = 0; i < n; i++) {
      var += pow(s[i]-mean, 2);
    }
    sd = sqrt(var / n);

    cout << fixed;
    cout << setprecision(8);
    cout << sd << endl;
  }

  return 0;
}
