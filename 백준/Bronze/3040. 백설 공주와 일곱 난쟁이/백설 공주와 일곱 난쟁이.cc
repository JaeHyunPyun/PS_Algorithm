#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> numArray;
  for (int i = 0; i < 9; i++) {
    int userInput = 0;
    cin >> userInput;
    numArray.push_back(userInput);
  }

  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 9; j++) {
      int sum = 0;
      vector<int> result;
      for (int k = 0; k < 9; k++) {
        if (k == i || k == j) {
          continue;
        }
        sum += numArray[k];
        result.push_back(numArray[k]);
        if (result.size() == 7 && sum == 100) {
          for (int l = 0; l < result.size(); l++) {
            cout << result[l] << "\n";
          }
          return 0;
        }
      }
    }
  }
}