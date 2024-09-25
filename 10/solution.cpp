#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

// sieves again
int main() {

  int n;
  cin >> n;

  long long out = 0;

  vector<bool> primes(n + 1, false);

  for (size_t i = 2; i < n; i++) {
    if (primes[i] == false) {
      out += i;
      for (size_t p = i * i; p < n; p += i) {
        primes[p] = true;
      }
    }
  }

  cout << "ans: " << out << endl;
}
