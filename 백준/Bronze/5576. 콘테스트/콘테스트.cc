#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> teamAScoreArray(10);
  vector<int> teamBScoreArray(10);
  int teamAScore = 0;
  int teamBScore = 0;
  fill(teamAScoreArray.begin(), teamAScoreArray.end(), 0);
  fill(teamBScoreArray.begin(), teamBScoreArray.end(), 0);
  for (int i = 0; i < 20; i++) {
    if (i < 10) {
      cin >> teamAScoreArray[i];
    } else {
      cin >> teamBScoreArray[i - 10];
    }
  }

  sort(teamAScoreArray.begin(), teamAScoreArray.end(), greater<int>());
  sort(teamBScoreArray.begin(), teamBScoreArray.end(), greater<int>());

  for (int i = 0; i < 3; i++) {
    teamAScore += teamAScoreArray[i];
    teamBScore += teamBScoreArray[i];
  }

  cout << teamAScore << " " << teamBScore << "\n";
}