#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int rowCount = 0;
  cin >> rowCount;
  int maxAsteriskCount = 2 * rowCount - 1;
  int maxPadding = maxAsteriskCount / 2;

  for (int i = 0; i < rowCount; i++) {
    for (int k = 0; k < maxPadding; k++) {
      cout << ' ';
    }
    for (int j = 0; j < (2 * (i + 1) - 1); j++) {
      cout << "*";
    }
    cout << "\n";
    maxPadding--;
  }
}