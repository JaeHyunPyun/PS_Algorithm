#include <iostream>

using namespace std;

int main() {
  char vocabulary[101];

  int alphabetCount[26];

  fill(alphabetCount, alphabetCount + 26, 0);

  cin >> vocabulary;
  for (int i = 0; vocabulary[i] != '\0' && i < 101; i++) {
    alphabetCount[vocabulary[i] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    cout << alphabetCount[i] << ' ';
  }
}