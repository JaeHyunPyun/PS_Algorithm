#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long A=0 , B = 0;
  cin >> A >> B;

  if(B>A)
  {
    long long count = B-A-1;

    cout << count <<"\n";

    for (long long i=A+1; i<B; i++)
    {
      cout << i << " ";
    }
  }
  else if(B<A)
  {
    long long count = A-B-1;

    cout << count <<"\n";

    for (long long i=B+1; i<A; i++)
    {
      cout << i << " ";
    }
  }
  else
  {
    long long count = 0;
    cout << count <<"\n";
    for (long long i=B+1; i<A; i++)
    {
      cout << i << " ";
    }
  } 

}