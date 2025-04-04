#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int trial = 0;

  for (int j = 0; j < 3; j++) {
    int oneCount = 0;
    for (int i = 0; i < 4; i++) {
      cin >> trial;
      if (trial == 1) {
        oneCount++;
      }
    }

    if (oneCount == 3) {
      cout << 'A';
    } else if (oneCount == 2) {
      cout << 'B';
    } else if (oneCount == 1) {
      cout << 'C';
    } else if (oneCount == 4) {
      cout << 'E';
    } else {
      cout << 'D';
    }
    cout << '\n';
  }
}