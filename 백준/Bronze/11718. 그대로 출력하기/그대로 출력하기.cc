#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  char input[101];

  while (cin.getline(input, sizeof(input))) {
    cout << input << endl;
  }

  return 0;
}