#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int student[12] = {};
  fill(student, student + 12, 0);
  int N, K;

  cin >> N >> K;

  for (int i = 0; i < N; i++) {
    int S = -1; // 성별
    int Y = 0;  // 학년

    cin >> S >> Y;

    // cout << "Y: " << 2 * (Y - 1) << "\n";
    student[2 * (Y - 1) + S]++;
  }

  // student debugging
  // for (int i = 0; i < 12; i++) {
  //   cout << student[i] << " ";
  // }
  // cout << "\n";

  // 방 갯수 산정
  int cnt = 0;

  for (int i = 0; i < 12; i++) {
    // 배열값 복사
    int n = student[i];
    if (n > 0 && n <= K) {
      // cout << "i: " << i << " " << "n: " << n << "\n";
      cnt++;
      // cout << "cnt: " << cnt << "\n";
    } else {
      while (n > 0) {
        // cout << "i: " << i << " " << "n: " << n << "\n";
        cnt++;
        n -= K;
        // cout << "cnt: " << cnt << "\n";
      }
    }
  }
  cout << cnt << "\n";
}