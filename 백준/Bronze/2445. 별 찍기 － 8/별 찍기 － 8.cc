#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int rowCount = 0;
  cin >> rowCount;

  for (int i = 0; i <= 2 * rowCount - 1; i++) {
    if (i <= (2 * rowCount - 1) / 2) {
      for (int j = 0; j < 2 * rowCount; j++) {
        if (j <= i || j >= 2 * rowCount - 1 - i) {
          cout << '*';
        } else {
          cout << ' ';
        }
      }
    } else {
      for (int j = 0; j < 2 * rowCount; j++) {
        if (j >= i + 1 || j <= 2 * rowCount - 2 - i) {
          cout << '*';
        } else {
          cout << ' ';
        }
      }
    }
    cout << "\n";
  }
}