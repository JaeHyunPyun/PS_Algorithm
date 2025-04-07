
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int inputNum = 0;
  int numArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int numCountArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int maxFrequentNumIndex = 0;
  int sum = 0;

  for (int i = 0; i < 10; i++) {
    cin >> inputNum;
    sum += inputNum;
    numArray[i] = inputNum;
  }

  cout << sum / 10 << "\n";

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (numArray[j] == numArray[i]) {
        numCountArray[i]++;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    if (numCountArray[maxFrequentNumIndex] < numCountArray[i]) {
      maxFrequentNumIndex = i;
    }
  }

  cout << numArray[maxFrequentNumIndex] << "\n";
}