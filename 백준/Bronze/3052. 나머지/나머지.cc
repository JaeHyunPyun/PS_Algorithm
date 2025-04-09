#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> remainder(42);
  int userInput = 0;
  int count = 0;

  for (int i = 0; i < 10; i++) {
    cin >> userInput;
    remainder[userInput % 42]++;
  }

  for (int i = 0; i < 42; i++) {
    if (remainder[i] != 0) {
      count++;
    }
  }
  cout << count;
}