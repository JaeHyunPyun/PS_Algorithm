#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  char alphabet[101];
  cin >> alphabet;
  for (int i = 0; alphabet[i] != '\0' && i < 101; i++) {
    if ('A' <= alphabet[i] && alphabet[i] <= 'Z') {
      alphabet[i] += 'a' - 'A';
    } else {
      alphabet[i] -= ('a' - 'A');
    }
  }
  cout << alphabet;
}