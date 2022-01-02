#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/8/ITP1_8_D
 */
int main() {
  char p[101], s[101], c[202];

  scanf("%s", s);
  scanf("%s", p);

  strcpy(c, s);
  strcat(c, s);

  if (strstr(c, p) != NULL) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
