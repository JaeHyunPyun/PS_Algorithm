#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int dw_height[9]; int result[7];

  for(int i=0; i<9; i++){cin >> dw_height[i];}

  //9C7 조합찾기
  for(int a=0; a<8; a++)
  {int total = 0;
    // cout << "total1_add: " << &total << "\n";
    for(int b=a+1; b<9; b++)
    {
      total =0;
      // a,b(제외대상)와 일치하지 않는 7개의 인덱스를 선별해서 result에 입력
      for(int c=0, i=0; c<9; c++){if(c!=a && c!=b){result[i++] = dw_height[c];}}

      // 구해진 7개 조합의 합 구하기
      for(int i=0; i<7; i++)
      {
        total += result[i];
      }

      // break point
      if(total == 100)
      {
        break;
      }
    }

    // break point
    if(total == 100)
    {
      break;
    }
  }

  //결과를 오름차순으로 정렬
  sort(result,result+7);

  //결과 출력
  for(int i=0; i<7; i++)
  {
    cout << result[i] << "\n";
  }
  


}