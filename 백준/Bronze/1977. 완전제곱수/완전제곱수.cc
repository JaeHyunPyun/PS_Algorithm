#include <iostream>
using namespace std;

int main(void){

  int minNumber;
  int maxNumber;
  int squareNumberSum=0;
  int minNum=-1;

  cin >> minNumber >> maxNumber;

  int i = 1;
  while(true){
    int currentSquareNumber = i*i;
    

    if (currentSquareNumber>maxNumber){
      break;
    }
    else if(currentSquareNumber>=minNumber && currentSquareNumber<=maxNumber){
      if(minNum == -1){
        minNum = currentSquareNumber;
      }
      squareNumberSum += currentSquareNumber;
    }
    
    i++;
  }

  if(minNum != -1){
    cout << squareNumberSum << endl;
    cout << minNum;
  }
  else{
    cout << -1;
  }
  
  return 0;
}
