#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int firstNum = 0;
  int secondNum = 0;

  while (true) {

    cin >> firstNum;
    cin >> secondNum;

    if (cin.eof()) {
      break;
    }

    cout << firstNum + secondNum << endl;
  }

  return 0;
}