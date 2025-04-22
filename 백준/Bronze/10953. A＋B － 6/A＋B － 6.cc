#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int testCaseCount = 0;

  cin >> testCaseCount;

  for (int i = 0; i < testCaseCount; i++) {
    string userInput;
    string firstNum;
    string secondNum;
    int firstNumInt = 0;
    int secondNumInt = 0;
    cin >> userInput;

    bool afterComma = false;

    for (int i = 0; i < userInput.length(); i++) {

      if (!afterComma) {
        if (userInput[i] == ',') {
          afterComma = true;
          continue;
        }
        firstNum.append(1, userInput[i]);
      } else {
        secondNum.append(1, userInput[i]);
      }
    }
    firstNumInt = (int)firstNum[0] - '0';
    secondNumInt = (int)secondNum[0] - '0';

    cout << firstNumInt + secondNumInt << "\n";
  }
}