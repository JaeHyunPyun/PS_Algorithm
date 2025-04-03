#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string currentInput = "";
  string targetInput = "";

  vector<int> currentTimeArray;
  vector<int> targetTimeArray;
  vector<int> resultTimeArray;

  cin >> currentInput >> targetInput;

  int currentTimeSubStringStartIndex = 0;
  for(int i=0; i<currentInput.size(); i++){
    if(currentInput.at(i)==':'||i==(currentInput.size()-1)){
      string currentInputSubStr = currentInput.substr(currentTimeSubStringStartIndex, 2);
      currentTimeArray.push_back(stoi(currentInputSubStr));
      
      int currentIndexPosition = i;
      currentTimeSubStringStartIndex = currentIndexPosition+1; 
    }
  }

  int targetTimeSubStringStartIndex = 0;
  for(int i=0; i<targetInput.size(); i++){
    if(targetInput.at(i)==':'|| i==(targetInput.size()-1)){
      string targetInputSubStr = targetInput.substr(targetTimeSubStringStartIndex, 2);
      targetTimeArray.push_back(stoi(targetInputSubStr));
      
      int targetIndexPosition = i;
      targetTimeSubStringStartIndex = targetIndexPosition+1; 
    }
  }

  int carry = 0;
  for (int i = (targetTimeArray.size()-1); i>=0; i--){
  
    if(carry==1){
      targetTimeArray[i] -= 1;
      carry=0;
    }

    if(i==0){
      if(targetTimeArray[i]<currentTimeArray[i]){
        resultTimeArray.push_back((targetTimeArray[i]+24)-currentTimeArray[i]);
        carry = 1;
      }else{
        resultTimeArray.push_back(targetTimeArray[i]-currentTimeArray[i]);
      }
    }else{
      if(targetTimeArray[i]<currentTimeArray[i]){
        resultTimeArray.push_back((targetTimeArray[i]+60)-currentTimeArray[i]);
        carry = 1;
      }else{
        resultTimeArray.push_back(targetTimeArray[i]-currentTimeArray[i]);
      }
    }
    
  }

  for(int i = targetTimeArray.size()-1; i>=0; i--){
    if(resultTimeArray[i]<10){
      cout << to_string(resultTimeArray[i]).insert(0,"0");
    }
    else{
      cout<< to_string(resultTimeArray[i]);
    }
    if(i!=0){
      cout <<":";
    }
  }


  return 0;
}
