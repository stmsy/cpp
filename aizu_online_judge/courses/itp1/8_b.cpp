#include <iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/8/ITP1_8_B
 */
int main() {
  char num[1000];
  int sum, d, i;

  while (true) {
    scanf("%s", num);

    if (num[0] == '0') break;

    sum = 0;
    i = 0;
    while (num[i]) {
      d = num[i] - '0';
      sum += d;
      i++;
    }

    cout << sum << '\n';
  }

  return 0;
}
