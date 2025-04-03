#include<iostream>

using namespace std;

int main() {
  int firstNum;
  int secondNum;

  int lcm = 1;  // 최소 공배수  
  int gcd = 1;   // 최대 공약수

  cin >> firstNum >> secondNum;
  while(true){

    bool hasCommonDivisor = false;
    for(int i=2; i<=min(firstNum,secondNum); i++){
      if(firstNum%i==0 && secondNum%i==0){
        hasCommonDivisor = true;
        gcd*=i;
        firstNum /=i;
        secondNum /=i;
      }
    }

    if(hasCommonDivisor == false){
      break;
    }
  }

  lcm = gcd * firstNum * secondNum;

  cout << gcd << "\n";
  cout << lcm;

}