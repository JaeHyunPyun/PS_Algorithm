#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int testcaseCount = 0;
  int playerCount = 0;

  cin >> testcaseCount;

  int playerPrice =0;
  string playerName = "";

  for(int i =0; i<testcaseCount; i++){
    cin >> playerCount;
    int maxplayerPrice =0;
    string maxPricePlayerName = "";
    for(int j=0; j<2*playerCount; j++){
      if(j%2==0){
        cin >> playerPrice;
        if(playerPrice > maxplayerPrice){
          maxplayerPrice = playerPrice;
        }
      }
      else{
        cin >> playerName;
        if(maxplayerPrice == playerPrice){
          maxPricePlayerName = playerName;
        }
      }
    }
    cout << maxPricePlayerName <<"\n"; 
  }

  return 0;
}
