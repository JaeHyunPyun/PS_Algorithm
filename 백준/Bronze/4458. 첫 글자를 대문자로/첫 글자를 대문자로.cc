#include <iostream>
#include <limits>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int lineCount = 0;
  cin >> lineCount;
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  for (int i = 0; i < lineCount; i++) {
    char line[31];
    cin.getline(line, sizeof(line));
    if (line[0] >= 'a' && line[0] <= 'z') {
      line[0] -= ('a' - 'A');
    }
    cout << line << '\n';
  }
}