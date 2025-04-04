#include <iostream>
using namespace std;

int main() {
  int schoolCount = 0;
  int appleCount = 0;
  int studentCount = 0;
  int residueSum = 0;

  cin >> schoolCount;

  for (int i = 0; i < schoolCount; i++) {
    cin >> appleCount >> studentCount;
    residueSum += (studentCount % appleCount);
  }

  cout << residueSum << endl;
}