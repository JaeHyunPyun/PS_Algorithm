#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int rowCount = 0;
  cin >> rowCount;

  for (int i = 1; i <= rowCount; i++) {
    for (int j = 1; j <= 2 * (rowCount)-1; j++) {
      if ((j >= i) && (j <= 2 * rowCount - i)) {
        cout << '*';
      } else if (j < i) {
        cout << ' ';
      }
    }
    cout << '\n';
  }
}