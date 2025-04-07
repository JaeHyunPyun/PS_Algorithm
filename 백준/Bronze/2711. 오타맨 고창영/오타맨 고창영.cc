#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int testCaseCount = 0;
  cin >> testCaseCount;

  int misspellLocation = -1;
  string inputString;

  for (int i = 0; i < testCaseCount; i++) {
    string newString;
    cin >> misspellLocation;
    cin >> inputString;
    misspellLocation--;
    newString.append(inputString.substr(0, misspellLocation));
    newString.append(inputString.substr(
        misspellLocation + 1, inputString.length() - misspellLocation));
    cout << newString << "\n";
  }
}