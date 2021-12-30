#include<iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_D
 */
int main() {
  int n, i, a, min, max;
  long long sum;

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a;
    if (i == 0) min = max = sum = a;
    else {
      if (a < min) min = a;
      if (a > max) max = a;
      sum += a;
    }
  }

  cout << min << " " << max << " " << sum << endl;

  return 0;
}
