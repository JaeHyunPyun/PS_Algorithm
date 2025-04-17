#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int scoreArray[8];
  int finalScore = 0;

  for (int i = 0; i < 8; i++) {
    cin >> scoreArray[i];
  }

  for (int j = 0; j < 3; j++) {
    int min = 200;
    int minIndex = 0;
    for (int k = 0; k < 8; k++) {
      if (scoreArray[k] < 0) {
        continue;
      }
      if (scoreArray[k] < min) {
        min = scoreArray[k];
        minIndex = k;
      }
    }

    scoreArray[minIndex] = -1;
  }

  for (int i = 0; i < 8; i++) {
    if (scoreArray[i] > 0) {
      finalScore += scoreArray[i];
    }
  }

  cout << finalScore << "\n";
  for (int i = 0; i < 8; i++) {
    if (scoreArray[i] > 0) {
      cout << i + 1 << " ";
    }
  }
}