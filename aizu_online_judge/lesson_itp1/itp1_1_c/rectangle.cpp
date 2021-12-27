#include<iostream>

/**
 * Read two integers, height and width, from standard input and compute its
 * area and perimeter.
 *
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_C
 */
int main() {
  int a, b;

  std::cin >> a >> b;
  std::cout << a * b << " " << 2 * (a + b) << std::endl;

  return 0;
}
