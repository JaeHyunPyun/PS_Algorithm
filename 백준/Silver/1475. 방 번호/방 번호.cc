#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  char userInput[8];
  int num_count_arr[10];

  fill(num_count_arr, num_count_arr + 10, 0);

  cin >> userInput;

  for (int i = 0; i < 8 && userInput[i] != '\0'; i++) {
    num_count_arr[userInput[i] - '0']++;
  }

  // 6이랑 9 합치기
  num_count_arr[6] =
      int(ceil((num_count_arr[6] + float(num_count_arr[9])) / 2));
  num_count_arr[9] = 0;

  // debug
  // for (int i = 0; i < 10; i++) {
  //   cout << num_count_arr[i] << " ";
  // }
  // cout << '\n';

  int max = num_count_arr[0];
  // set amount count
  for (int i = 0; i < 10; i++) {
    if (num_count_arr[i] > max) {
      max = num_count_arr[i];
    }
  }
  cout << max << '\n';
}
