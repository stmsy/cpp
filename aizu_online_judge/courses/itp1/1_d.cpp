#include<iostream>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/1/ITP1_1_D
 */
int main() {
  int S;
  int hours, minutes, seconds;

  cin >> S;

  hours = S / 3600;
  minutes = (S % 3600) / 60;
  seconds = S - (3600 * hours + 60 * minutes);

  cout << hours << ":" << minutes << ":" << seconds << endl;

  return 0;
}
