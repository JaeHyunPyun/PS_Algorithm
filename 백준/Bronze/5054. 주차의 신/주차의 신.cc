#include <iostream>

using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int testCount = 0;

  cin >> testCount;

  for (int i = 0; i < testCount; i++) {
    int storeLocationSum = 0;
    int storeCount = 0;
    int minLocation = 99;
    int maxLocation = 0;
    int currentInput = 0;
    int storeLocationAverage = 0;
    cin >> storeCount;

    for (int j = 0; j < storeCount; j++) {
      cin >> currentInput;
      if (j == 0) {
        minLocation = currentInput;
        maxLocation = currentInput;
      } else {
        if (currentInput > maxLocation) {
          maxLocation = currentInput;
        } else if (currentInput < minLocation) {
          minLocation = currentInput;
        }
      }
      storeLocationSum += currentInput;
    }
    storeLocationAverage = storeLocationSum / storeCount;
    cout << 2 * (maxLocation - storeLocationAverage) +
                2 * (storeLocationAverage - minLocation)
         << "\n";
  }
}