#include <iostream>
#include <vector>

using namespace std;

int main() {
  int testCount = 0;
  int memberCount = 0;
  int seatCount = 0;

  cin >> testCount;

  for (int i = 0; i < testCount; i++) {
    cin >> memberCount;
    cin >> seatCount;

    vector<int> inputArray(seatCount);
    int result = 0;

    for (int j = 0; j < memberCount; j++) {
      int memberPreferSeatNumber = 0;
      cin >> memberPreferSeatNumber;
      inputArray[memberPreferSeatNumber - 1]++;
    }

    for (int k = 0; k < seatCount; k++) {

      if (inputArray[k] > 0) {
        result += (inputArray[k] - 1);
      }
    }
    cout << result << "\n";
  }
}