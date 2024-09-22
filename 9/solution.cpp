#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  for (int a = 0; a < 1000; a++) {
    if (a == 0) {
      continue;
    }
    for (int b = 0; b < 1000; b++) {
      if (b == 0) {
        continue;
      }
      for (int c = 0; c < 1000; c++) {
        if (c == 0) {
          continue;
        }
        if (a > b || b > c) {
          continue;
        }
        if (a + b + c != 1000) {
          continue;
        }
        if (a * a + b * b == c * c) {
          cout << "ans - a: " << a << " b: " << b << " c: " << c << endl;
          cout << "ans: " << a * b * c << endl;
          return 0;
        }
      }
    }
  }
}
