#include <iostream>
#include <vector>

using namespace std;

int reverseNumber(int originalNumber) {

  vector<int> numberArray;
  int newNumber = 0;

  while (true) {
    if (originalNumber / 10 <= 0) {
      numberArray.push_back(originalNumber % 10);
      break;
    }
    numberArray.push_back(originalNumber % 10);
    originalNumber /= 10;
  }

  for (int i = 0; i < numberArray.size(); i++) {

    // 자릿수 구하기
    int digitUnit = 1;
    for (int j = 0; j < numberArray.size() - 1 - i; j++) {
      digitUnit *= 10;
    }
    newNumber += numberArray[i] * digitUnit;
  }

  return newNumber;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int firstOriginalNumber = 0;
  int secondOriginalNumber = 0;
  int sum = 0;
  cin >> firstOriginalNumber >> secondOriginalNumber;

  int reversedFirstOriginalNumber = reverseNumber(firstOriginalNumber);
  int reversedSecondOriginalNumber = reverseNumber(secondOriginalNumber);
  sum = reversedFirstOriginalNumber + reversedSecondOriginalNumber;

  int reversedSum = reverseNumber(sum);

  cout << reversedSum;
}