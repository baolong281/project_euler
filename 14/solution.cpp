#include <iostream>

using namespace std;

long long collatz_length(long n) {
  long long out = 1;
  while (n != 1) {

    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
    out++;
  }

  return out;
}

int main() {
  long long length = 0;
  long long ans = 0;

  for (int i = 1; i <= 1000000; i++) {
    long long current = collatz_length(i);
    if (current > length) {
      length = current;
      ans = i;
    }
  }
  cout << "answer: " << ans << endl;
}
