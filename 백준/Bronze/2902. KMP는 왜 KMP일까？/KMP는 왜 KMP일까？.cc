#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string userInput;

  cin >> userInput;

  string algorithmNameAbbreviation;
  bool afterHyphen = false;
  for (int i = 0; i < userInput.length(); i++) {
    if (i == 0) {
      algorithmNameAbbreviation.append(1, userInput[i]);
    }

    if (userInput[i] == '-') {
      afterHyphen = true;
      continue;
    }

    if (afterHyphen == true) {
      algorithmNameAbbreviation.append(1, userInput[i]);
      afterHyphen = false;
    }
  }
  // cout << algorithmNameAbbreviation.length();
  cout << algorithmNameAbbreviation;
}