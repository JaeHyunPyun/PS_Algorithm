#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int targetIndex = 0;
  cin >> targetIndex;

  int baseNumZero = 0;
  int baseNumOne = 1;
  int temp = 0;
  int targetNum = 0;

  if (targetIndex == 1) {
    cout << 1;
  } else {
    for (int i = 0; i < targetIndex - 1; i++) {
      temp = baseNumZero + baseNumOne;
      baseNumZero = baseNumOne;
      baseNumOne = temp;
    }
    cout << temp;
  }
}