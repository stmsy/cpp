#include <iostream>
#include <string>

using namespace std;

/**
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/9/ITP1_9_D
 */
int main() {
  string str, op, p, substr;
  int q, a, b;

  cin >> str >> q;
  for (int i = 0; i < q; i++) {
    cin >> op >> a >> b;
    if (op == "print") cout << str.substr(a, b-a+1) << endl;
    else if (op == "reverse") {
      substr = str.substr(a, b-a+1);
      int len = substr.length();
      for (int j = 0; j < len; j++) {
        str[a+j] = substr[len-1-j];
      }
    }
    else if (op == "replace") {
      cin >> p;
      str = str.replace(a, b-a+1, p);
    }
  }

  return 0;
}
