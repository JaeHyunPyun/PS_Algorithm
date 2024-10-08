#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  //Test case 갯수
  int n;
  cin >> n;

  while(n--)
  {
  bool flag = true;
  char org[1002];
  char strfry[1002];

  cin >> org >> strfry;
  
  int alphabet[26];
  fill(alphabet, alphabet+26, 0);
  
  // org 요소 검사
  for(int i=0; i<1002 && org[i] != '\0'; i++){
    alphabet[org[i]-97]++;
  }

  // for(int i=0; i<26;i++){
  //   cout<< alphabet[i] << " ";
  // }
  // cout << "\n";

  // strfry 요소 검사 
  for(int i=0; i<1002 && org[i] != '\0'; i++){
    if(alphabet[strfry[i]-97]){
      alphabet[strfry[i]-97]--;
    }
    else{
      flag = false;
      cout << "Impossible"<<"\n";
      break; 
    }
  }

  // cout << "after detection: " << "\n";
  // for(int i=0; i<26;i++){
  //   cout<< alphabet[i] << " ";
  // }

  if(flag==true)
  {for(int i=0; i<26;i++){
    if(alphabet[i])
    {
      cout << "Impossible"<<"\n";
      break; 
    }
  }
  cout << "Possible"<<"\n";
  }
  // a~z의 배열을 만들고 count를 한다음에 strfry의 배열을 체크한다음에 count를 --
  // 만약 strfry 전체 문자열을 다 돌기 전에 특정 알파벳에서 인덱스가 0미만으로 떨어지거나
  // loop를 다 돌았는데 인덱스가 아직 남아있는 알파벳이 있는 경우 impossible 표시 
  // 그외의 경우에는 possible 표시

  }

}