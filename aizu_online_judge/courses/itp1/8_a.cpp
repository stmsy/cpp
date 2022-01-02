#include <cctype>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/8/ITP1_8_A
 */
int main() {
  string line;
  char ch;
  int i;

  getline(cin, line);

  for (i = 0; i < line.length(); i++) {
    ch = line[i];
    if (isupper(ch)) printf("%c", tolower(ch));
    else if (islower(ch)) printf("%c", toupper(ch));
    else printf("%c", toupper(ch));
  }

  cout << endl;

  return 0;
}
