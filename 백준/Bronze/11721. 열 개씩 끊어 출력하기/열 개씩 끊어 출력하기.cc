#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string userInput;

  cin >> userInput;

  int chunkCount = userInput.length() / 10;

  if (chunkCount <= 0) {
    cout << userInput << "\n";
  } else {
    for (int i = 0; i < chunkCount; i++) {
      cout << userInput.substr(i * 10, 10) << "\n";
      if (i == (chunkCount - 1) && userInput[(i + 1) * 10] != '\0') {
        cout << userInput.substr((i + 1) * 10);
      }
    }
  }
}