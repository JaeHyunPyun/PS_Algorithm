#include <iostream>
#include <vector>

using namespace std;

int main() {

  int inputCount = 0;

  cin >> inputCount;
  vector<int> userInputArray;

  for (int i = 0; i < inputCount; i++) {
    int currentInput = 0;

    cin >> currentInput;

    if (currentInput > 0) {
      userInputArray.push_back(currentInput);
    } else {
      userInputArray.pop_back();
    }
  }

  if (userInputArray.size() < 0) {
    cout << 0;
  } else {
    int sum = 0;
    for (int i = 0; i < userInputArray.size(); i++) {
      sum += userInputArray[i];
    }
    cout << sum;
  }
}