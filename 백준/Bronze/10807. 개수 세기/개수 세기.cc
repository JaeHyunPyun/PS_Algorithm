#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int  n = 0;
  cin >> n;

  // cout << "n: "<< n << "\n";
  int n_array[n];
  

  for(int i=0; i<n; i++)
  {
    cin >> n_array[i];
  }

  int tgt;
  cin >> tgt;

  int cnt = 0;
  // for(int i=0; i<n; i++)
  // {
  //   cout << n_array[i] << " ";
  // }

  for(int i =0; i<n; i++){
    if(n_array[i] == tgt){cnt++;}
  }
  cout << cnt;
}