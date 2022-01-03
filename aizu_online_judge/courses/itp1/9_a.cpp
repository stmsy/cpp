#include <iostream>
#include <string>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/9/ITP1_9_A
 */
int main() {
  string W, T, word;
  int counter, i;

  cin >> W;

  counter = 0;
  while (true) {
    cin >> T;

    if (T == "END_OF_TEXT") break;

    word = T;
    for (i = 0; i < word.length(); i++) word[i] = tolower(T[i]);

    if (W == word) counter++;
  }

  cout << counter << endl;

  return 0;
}
