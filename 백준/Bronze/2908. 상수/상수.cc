
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  char firstNum[4];
  char secondNum[4];

  cin >> firstNum >> secondNum;

  char reversedFirstNum[4];
  char reversedSecondNum[4];
  for (int i = 0; firstNum[i] != '\0'; i++) {
    reversedFirstNum[i] = firstNum[2 - i];
    reversedSecondNum[i] = secondNum[2 - i];
  }

  int reversedFirstNumInt = atoi(reversedFirstNum);
  int reversedSecondNumInt = atoi(reversedSecondNum);

  if (reversedFirstNumInt > reversedSecondNumInt) {
    cout << reversedFirstNumInt;
  } else {
    cout << reversedSecondNumInt;
  }
}