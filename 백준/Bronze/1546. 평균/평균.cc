#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int questionCount = 0;
  double individualScore = 0;
  cin >> questionCount;
  double scoreArray[questionCount];
  double maxScore = 0;
  double totalScore = 0;

  for (int i = 0; i < questionCount; i++) {
    cin >> scoreArray[i];
  }

  // max 구하기
  for (int i = 0; i < questionCount; i++) {
    if (maxScore < scoreArray[i]) {
      maxScore = scoreArray[i];
    }
  }

  // 점수 바꾸기
  for (int i = 0; i < questionCount; i++) {
    scoreArray[i] = ceil((scoreArray[i] / maxScore * 100) * 100) / 100;
  }

  // 평균 계산
  for (int i = 0; i < questionCount; i++) {
    totalScore += scoreArray[i];
  }
  cout << totalScore / questionCount;
}