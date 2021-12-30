#include <iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/4/ITP1_4_C
 */
int main() {
  int a, b;
  char op;

  while (true) {
    cin >> a >> op >> b;

    if (op == '+') cout << a + b << '\n';
    else if (op == '-') cout << a - b << '\n';
    else if (op == '*') cout << a * b << '\n';
    else if (op == '/') cout << a / b << '\n';
    else break;
  }

  return 0;
}
