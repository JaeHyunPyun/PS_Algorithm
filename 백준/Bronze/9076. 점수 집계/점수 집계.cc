#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  int testCount = 0;
  int currentInput = 0;
  cin >> testCount;

  for (int i = 0; i < testCount; i++) {
    int result = 0;
    vector<int> numArray;
    for (int i = 0; i < 5; i++) {
      cin >> currentInput;
      numArray.push_back(currentInput);
    }
    sort(numArray.begin(), numArray.end(), greater<int>());

    numArray.erase(numArray.begin());
    numArray.erase(numArray.end() - 1);

    if (numArray.front() - numArray.back() >= 4) {
      cout << "KIN" << "\n";
      continue;
    }

    for (int i = 0; i < numArray.size(); i++) {
      result += numArray[i];
    }

    cout << result << "\n";
  }
}