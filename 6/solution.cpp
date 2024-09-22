#include <iostream>

using namespace std;

int main() {

  long long sum_square = (100 * (100 + 1) * (2 * 100 + 1)) / 6;
  long long square_sum = (100 * (100 + 1)) / 2;

  square_sum = square_sum * square_sum;

  long long ans = square_sum - sum_square;

  cout << "answer: " << ans << endl;
}
