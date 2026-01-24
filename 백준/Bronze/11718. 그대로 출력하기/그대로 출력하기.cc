#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (true) {
    char input[101] = {
        0,
    };

    cin.getline(input, sizeof(input));

    if (input[0] == '\0') {
      break;
    }

    cout << input << endl;
  }

  return 0;
}