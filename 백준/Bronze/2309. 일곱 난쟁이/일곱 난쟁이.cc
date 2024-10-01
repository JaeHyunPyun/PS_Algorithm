#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void printv(vector<int> v)
{
  for(int i=0; i<v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << "\n";
  
}

void printvv(vector<vector<int>> v)
{
  for(int i=0; i<v.size(); i++)
  {
    for(int j=0; j<v[i].size(); j++)
    {
      cout << v[i][j] << " ";
    }
    cout << "\n"; 
  }
  cout << "\n"; 
}


void combination(vector<vector<int>>* result, vector<int> v, int start, int n, int r)
{
  if(v.size()== r)
  {
    result->push_back(v);
    return;
  }

  for(int i=start; i<n; i++)
  {
    v.push_back(i);
    combination(result, v, i+1, n, r);
    v.pop_back();
  }

  return;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int dw_height[9];

  for (int i=0; i<9; i++)
  {
    cin >> dw_height[i];
  }


  int temp = 0;

  //정렬
  for (int i=0; i<9; i++)
  {
    int* min_height = &dw_height[i];
    for(int j=i+1; j<9; j++)
    {
      if(*min_height>dw_height[j])
      {
        temp = *min_height;
        *min_height = dw_height[j];
        dw_height[j] = temp;
      }
    }
  }


  //만족하는 7명 찾기
  
  // 조합 생성
  vector<int> samp_vec;
  vector<vector<int>> result;
  combination(&result, samp_vec, 0, 9,7);


  // 조합의 합 구해보기
 
  for(int i=0; i<result.size(); i++)
    {
      int comb_sum = 0;
      for(int j=0; j<result[i].size(); j++)
      {
        comb_sum += dw_height[result[i][j]];
      }
      if(comb_sum == 100)
      {
        for(int k=0; k<result[i].size(); k++)
        {
          cout << dw_height[result[i][k]] << '\n';
        }
        break;
      }      
    }
}