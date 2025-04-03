#include<iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int dan =0;

  cin >> dan;

  for(int i =1; i<=9; i++){
    cout << dan << " * " << i << " = " << dan*i<<"\n";
  }

}