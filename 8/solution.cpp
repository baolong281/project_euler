#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  std::string input;
  std::string line;

  while (getline(cin, line)) {
    input += line;
  }

  vector<int> digits;
  for (auto c : input) {
    digits.push_back(c - '0');
  }

  long out = 0;

  for (int i = 0; i < digits.size() - 13; i++) {
    long curr_window = 1;
    for (int j = 0; j < 13; j++) {
      curr_window *= digits[i + j];
    }
    out = max(out, curr_window);
  }

  cout << "answer: " << out << endl;
}
