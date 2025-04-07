
#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int firstNum = 1;
  int secondNum = 1;
  int thirdNum = 1;
  int multiplyResult = 1;
  string multiplyResultString;
  int numCountArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  cin >> firstNum >> secondNum >> thirdNum;

  multiplyResult = firstNum * secondNum * thirdNum;

  multiplyResultString = to_string(multiplyResult);

  for (int i = 0; i < multiplyResultString.length(); i++) {
    for (int j = 0; j < 10; j++) {
      if (multiplyResultString[i] == char(j + 48)) {
        numCountArray[j]++;
      }
    }
  }

  for (int k = 0; k < 10; k++) {
    cout << numCountArray[k] << "\n";
  }
}