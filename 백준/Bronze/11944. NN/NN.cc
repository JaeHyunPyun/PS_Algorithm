#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int number = 0;
  int maxDigit = 0;
  cin >> number >> maxDigit;
  string numberString = to_string(number);
  string finalNumberString;
  string finalNumberStringConcat;

  for (int i = 0; i < number; i++) {
    finalNumberString.append(numberString);
    if (finalNumberString.length() > maxDigit) {
      break;
    }
  }

  if (finalNumberString.length() > maxDigit) {
    for (int i = 0; i < maxDigit; i++) {
      finalNumberStringConcat.append(1, finalNumberString[i]);
    }
    cout << finalNumberStringConcat;
  } else {
    cout << finalNumberString;
  }
}