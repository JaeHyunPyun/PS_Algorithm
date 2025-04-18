#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int factorCount = 0;
  cin >> factorCount;

  int userInput = 0;
  int minFactor = 0;
  int maxFactor = 0;

  for (int i = 0; i < factorCount; i++) {
    if (i == 0) {
      cin >> userInput;
      minFactor = userInput;
      maxFactor = userInput;
    } else {
      cin >> userInput;
      if (userInput > maxFactor) {
        maxFactor = userInput;
      } else if (userInput < minFactor) {
        minFactor = userInput;
      }
    }
  }

  cout << maxFactor * minFactor;
}