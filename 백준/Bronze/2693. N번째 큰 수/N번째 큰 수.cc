#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  int testCount = 0;
  int inputArraySize = 10;

  cin >> testCount;

  for (int i = 0; i < testCount; i++) {
    vector<int> inputArray;
    for (int j = 0; j < inputArraySize; j++) {
      int userInput = 0;
      cin >> userInput;
      inputArray.push_back(userInput);
    }

    sort(inputArray.begin(), inputArray.end(), greater<int>());

    cout << inputArray[2] << "\n";
  }
}