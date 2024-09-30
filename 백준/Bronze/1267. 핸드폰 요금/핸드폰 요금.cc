#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// 영식 요금제
int ysik(int *arr, int call_num)
{
  int total_ys = 0;
  for (int i = 0; i < call_num; i++)
  {
    int dividend = arr[i] / 30;
    total_ys += (dividend + 1) * 10;
  }

  return total_ys;
}

// 민식 요금제
int msik(int *arr, int call_num)
{
  int total_ms = 0;
  for (int i = 0; i < call_num; i++)
  {
    int dividend = arr[i] / 60;
    total_ms += (dividend + 1) * 15;
  }

  return total_ms;
}

int main()
{

  // 사용자 입력받기
  int N = 0;
  int call_time = 0;

  cin >> N;

  int call_list[N];

  for (int i = 0; i < N; i++)
  {
    cin >> call_time;
    call_list[i] = call_time;
  }

  int ys_cost = ysik(call_list, N);
  int ms_cost = msik(call_list, N);

  if (ys_cost < ms_cost)
  {
    cout << "Y " << ys_cost;
  }
  else if (ys_cost > ms_cost)
  {
    cout << "M " << ms_cost;
  }
  else
  {
    cout << "Y M " << ms_cost;
  }
}