#include <iostream>
#include <string>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/8/ITP1_8_C
 */
int main() {
  int alpha[26] = {};
  int i;
  char ch;

  while (cin >> ch) {
    if (isalpha(ch)) {
      alpha[tolower(ch)-'a']++;
    }
  }

  for (i = 0; i < 26; i++) printf("%c : %d\n", i+'a', alpha[i]);

  return 0;
}
