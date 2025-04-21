#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int coinTypeCount = 0;
  int targetValue = 0;
  int minimumNeededCoinCount = 0;
  cin >> coinTypeCount >> targetValue;
  vector<int> coinTypeArray(coinTypeCount);

  for (int i = 0; i < coinTypeCount; i++) {
    cin >> coinTypeArray[i];
  }

  sort(coinTypeArray.begin(), coinTypeArray.end(), greater<int>());

  int coinTypeArrayIndex = 0;
  int currentCoinType = coinTypeArray[coinTypeArrayIndex];
  while (true) {
    if (targetValue <= 0) {
      break;
    } else if ((targetValue / currentCoinType) <= 0) {
      coinTypeArrayIndex++;
      if (coinTypeArrayIndex < coinTypeArray.size()) {
        currentCoinType = coinTypeArray[coinTypeArrayIndex];
      } else {
        break;
      }

    } else {
      minimumNeededCoinCount += (targetValue / currentCoinType);
      targetValue %= currentCoinType;
      coinTypeArrayIndex++;
      if (coinTypeArrayIndex < coinTypeArray.size()) {
        currentCoinType = coinTypeArray[coinTypeArrayIndex];
      } else {
        break;
      }
    }
  }

  cout << minimumNeededCoinCount;
}