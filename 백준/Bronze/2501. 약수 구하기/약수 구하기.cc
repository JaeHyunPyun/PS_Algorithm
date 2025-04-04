#include <iostream>

using namespace std;

int main() {
  int num = 0;
  int targetCount = 0;
  int yaksuCount = 0;

  cin >> num >> targetCount;

  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      yaksuCount++;
      if (yaksuCount == targetCount) {
        cout << i;
        return 0;
      }
    }
  }
  cout << 0;
}