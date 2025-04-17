#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int lineCount = 0;
  vector<int> inputArray;

  cin >> lineCount;

  for (int i = 0; i < lineCount; i++) {
    int userInput = 0;
    cin >> userInput;
    inputArray.push_back(userInput);
  }

  sort(inputArray.begin(), inputArray.end());

  for (int i = 0; i < lineCount; i++) {
    cout << inputArray[i] << "\n";
  }
}