#include <iostream>
using namespace std;

void smallNum(int array_len, int target)
{
  int element = 0;
  for (int i = 0; i < array_len; i++)
  {
    cin >> element;
    if (element < target)
    {
      cout << element << " ";
    }
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N = 0;
  int X = 0;

  cin >> N;
  cin >> X;

  smallNum(N, X);
}