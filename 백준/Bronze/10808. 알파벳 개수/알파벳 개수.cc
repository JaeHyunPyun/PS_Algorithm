#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  char user_input[102];

  cin >> user_input;

  int alphabets[26];
  fill(alphabets, alphabets+26, 0);
  
  for(int i=0; i<102 && user_input[i]!='\0'; i++)
  {
    int char_to_int = int(user_input[i]-97);
    if(char_to_int>=0 && char_to_int <26)
      {
        alphabets[char_to_int]++; 
      }
  }

  for(int i =0; i<26; i++)
  {
    cout<< alphabets[i] << " ";
  }

}