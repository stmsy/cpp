#include<iostream>

/**
 * Read an integer from standard input and compute its cubic.
 *
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_B
 */
int main() {
  int x;

  std::cin >> x;
  std::cout << x * x * x << std::endl;

  return 0;
}
