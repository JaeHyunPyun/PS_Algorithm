#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int testCase = 0;

  cin >> testCase;

  for (int i = 0; i < testCase; i++) {
    int studentCount = 0;
    int maxScore = 0;
    int minScore = 0;
    int largestScoreGap = 0;
    cin >> studentCount;
    vector<int> studentScoreArray(studentCount);
    for (int j = 0; j < studentCount; j++) {
      cin >> studentScoreArray[j];
    }

    sort(studentScoreArray.begin(), studentScoreArray.end());

    if (studentScoreArray.size() > 0) {
      maxScore = studentScoreArray[studentScoreArray.size() - 1];
      minScore = studentScoreArray[0];
      for (int i = 0; i < studentScoreArray.size() - 1; i++) {
        int currentGap = studentScoreArray[i + 1] - studentScoreArray[i];
        if (currentGap > largestScoreGap) {
          largestScoreGap = currentGap;
        }
      }
    }

    cout << "Class " << i + 1 << "\n";
    cout << "Max " << maxScore << ", " << "Min " << minScore << ", "
         << "Largest gap " << largestScoreGap << "\n";
  }
}