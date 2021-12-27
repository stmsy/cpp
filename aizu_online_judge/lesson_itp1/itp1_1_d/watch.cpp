#include<iostream>

/**
 * Read an integer from standard input and convert to time in hours, minutes,
 * and seconds.
 *
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_D
 */
int main() {
  int S;
  int hours, minutes, seconds;

  std::cin >> S;

  hours = S / 3600;
  minutes = (S % 3600) / 60;
  seconds = S - (3600 * hours + 60 * minutes);

  std::cout << hours << ":" << minutes << ":" << seconds << std::endl;

  return 0;
}
