#include <climits>
#include <iostream>
using namespace std;

int main() {

  int numCount = 0;
  int minNum = 0;
  int maxNum = 0;
  int primeSum = 0;
  int minPrimeNumber = INT_MAX;

  cin >> minNum >> maxNum;

  for (int i = minNum; i <= maxNum; i++) {
    bool isPrimeNumber = true;
    if (i == 1) {
      continue;
    }
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        isPrimeNumber = false;
        continue;
      }
    }
    if (isPrimeNumber == true) {
      primeSum += i;
      if (i < minPrimeNumber) {
        minPrimeNumber = i;
      }
    }
  }

  if (primeSum == 0) {
    cout << -1;
  } else {
    cout << primeSum << "\n";
    cout << minPrimeNumber;
  }
}