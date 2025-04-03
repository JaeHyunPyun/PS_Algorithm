#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int semesterCount = 0;
  int subjectCount = 0;
  
  int subjectInput =0;
  double gpaInput =0;
  
  cin >> semesterCount;


  for(int i =0 ; i< semesterCount ; i++){
    cin >> subjectCount;

    int takenClassCount = 0;
    double gpaTotal = 0.0;
    double gpa =0.0;

    for(int j=0; j<2*subjectCount ; j++){
      if(j%2==0){
        cin >> subjectInput;
        takenClassCount += subjectInput;
      }
      else{
        cin >> gpaInput;
        gpaTotal += subjectInput*gpaInput;
      }
    }
    gpa = round(gpaTotal/takenClassCount*10)/10;


    cout << takenClassCount << " "<< gpa<<"\n"; 
  }


}