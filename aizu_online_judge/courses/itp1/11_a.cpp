#include <iostream>

using namespace std;

class Cube {
  public:
    int faces[6];

    // Init the Cube object
    Cube() {}

    void roll(int i, int j, int k, int l) {
      // Permutation of length 4 with 2 faces fixed;
      int t = faces[i];
      faces[i] = faces[j];
      faces[j] = faces[k];
      faces[k] = faces[l];
      faces[l] = t;
    }
    void roll_x() {roll(0, 1, 5, 4);}  // One-time roll in 'N'
    void roll_y() {roll(0, 2, 5, 3);}  // One-time roll in 'W'

    void move(char ch) {
      if (ch == 'N') roll_x();
      else if (ch == 'W') roll_y();
      else if (ch == 'S') {
        // One-time in roll 'S' is equiv to three-time in 'N'
        for (int i = 0; i < 3; i++) roll_x();
      }
      else if (ch == 'E') {
        // One-time roll in 'E' is equiv to three-time in 'W'
        for (int i = 0; i < 3; i++) roll_y();
      }
    }
};

int main() {
  Cube cube;
  string ops;

  for (int i = 0; i < 6; i++) cin >> cube.faces[i];

  cin >> ops;

  for (int i = 0; i < ops.length(); i++) cube.move(ops[i]);

  cout << cube.faces[0] << endl;

  return 0;
}
