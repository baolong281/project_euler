#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<vector<int> > mat;
  ifstream file("input.txt");

  string line;
  while (getline(file, line)) {
    stringstream ss(line);
    vector<int> row;
    int num;

    while (ss >> num) {
      row.push_back(num);
    }

    mat.push_back(row);
  }

  int n = mat.size();

  long long out = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j <= n - 4) {
        long long product =
            mat[i][j] * mat[i][j + 1] * mat[i][j + 2] * mat[i][j + 3];
        out = max(product, out);
      }
      if (i <= n - 4) {
        long long product =
            mat[i][j] * mat[i + 1][j] * mat[i + 2][j] * mat[i + 3][j];
        out = max(product, out);
      }
      if (i <= n - 4 && j <= n - 4) {
        long long product = mat[i][j] * mat[i + 1][j + 1] * mat[i + 2][j + 2] *
                            mat[i + 3][j + 3];
        out = max(product, out);
      }
      if (i <= n - 4 && j >= 3) {
        long long product = mat[i][j] * mat[i + 1][j - 1] * mat[i + 2][j - 2] *
                            mat[i + 3][j - 3];
        out = max(product, out);
      }
    }
  }

  cout << "ans: " << out << endl;
}
