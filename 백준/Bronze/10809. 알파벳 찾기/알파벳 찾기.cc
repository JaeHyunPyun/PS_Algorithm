#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> alphabetExistenceArray(26);
  fill(alphabetExistenceArray.begin(), alphabetExistenceArray.end(), -1);

  char userInput[101];

  cin >> userInput;

  for (int i = 0; userInput[i] != '\0' && i < 101; i++) {
    if (alphabetExistenceArray[userInput[i] - 'a'] < 0) {
      alphabetExistenceArray[userInput[i] - 'a'] = i;
    }
  }

  for (int i = 0; i < alphabetExistenceArray.size(); i++) {
    cout << alphabetExistenceArray[i] << " ";
  }
  cout << "\n";
}