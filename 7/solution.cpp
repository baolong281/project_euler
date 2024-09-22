#include <iostream>
#include <vector>

using namespace std;

// sieve of eratosthenes
int main() {
  int n = 200000;
  int primes = 0;

  vector<bool> marked(n, false);

  int i = 2;
  while (primes < 10001) {
    if (marked[i] == false) {
      primes += 1;
      int m = i * 2;
      int j = 2;
      while (m < n) {
        marked[m] = true;
        j += 1;
        m = i * j;
      }
    }
    i++;
  }

  cout << "answer: " << i - 1 << endl;
}
