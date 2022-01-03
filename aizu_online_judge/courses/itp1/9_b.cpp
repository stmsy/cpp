#include <iostream>
#include <string>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/9/ITP1_9_B
 */
int main() {
  string cards;
  int num_shuffles, i, h;

  while (true) {
    cin >> cards;

    if (cards == "-") break;

    cin >> num_shuffles;
    for (i = 0; i < num_shuffles; i++) {
      cin >> h;
      cards = cards.substr(h, cards.length()) + cards.substr(0, h);
    }

    cout << cards << '\n';
  }

  return 0;
}
