#include <iostream>

using namespace std;

/**
 *  https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_B
 */
int main() {
  int n, x, i, j, k;


  while (true) {
    cin >> n >> x;
    int counter;

    if (n == 0 && x == 0) break;

    counter = 0;
    for (i = 1; i <= n-2; i++) {
      for (j = i+1; j <= n-1; j++) {
        for (k = j+1; k <= n; k++) {
          if (i+j+k == x) counter++;
        }
      }
    }

    cout << counter << '\n';
  }

  return 0;
}
