#include <iostream>
#include <string>

using namespace std;

bool isInputOlder(int inputYear, int inputMonth, int inputDay, int compareYear,
                  int compareMonth, int compareDay) {

  if (inputYear < compareYear) {
    return true;
  } else if (inputYear == compareYear) {
    if (inputMonth < compareMonth) {
      return true;
    } else if (inputMonth == compareMonth) {
      if (inputDay < compareDay) {
        return true;
      }
    }
  }

  return false;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int studentCounter = 0;

  string inputStudentName;
  int inputStudentYear = 0;
  int inputStudentMonth = 0;
  int inputStudentDay = 0;

  string maxStudentName;
  int maxStudentYear = 0;
  int maxStudentMonth = 0;
  int maxStudentDay = 0;

  string minStudentName;
  int minStudentYear = 0;
  int minStudentMonth = 0;
  int minStudentDay = 0;

  cin >> studentCounter;

  for (int i = 0; i < studentCounter; i++) {
    cin >> inputStudentName >> inputStudentDay >> inputStudentMonth >>
        inputStudentYear;
    if (i == 0) {
      // max 생일 초기화
      maxStudentName = inputStudentName;
      maxStudentYear = inputStudentYear;
      maxStudentMonth = inputStudentMonth;
      maxStudentDay = inputStudentDay;

      // min 생일 초기화
      minStudentName = inputStudentName;
      minStudentYear = inputStudentYear;
      minStudentMonth = inputStudentMonth;
      minStudentDay = inputStudentDay;
    } else {
      if (!isInputOlder(inputStudentYear, inputStudentMonth, inputStudentDay,
                        maxStudentYear, maxStudentMonth, maxStudentDay)) {
        if (!isInputOlder(inputStudentYear, inputStudentMonth, inputStudentDay,
                          minStudentYear, minStudentMonth, minStudentDay)) {
          minStudentName = inputStudentName;
          minStudentYear = inputStudentYear;
          minStudentMonth = inputStudentMonth;
          minStudentDay = inputStudentDay;
        }
      } else {
        maxStudentName = inputStudentName;
        maxStudentYear = inputStudentYear;
        maxStudentMonth = inputStudentMonth;
        maxStudentDay = inputStudentDay;
      }
    }
  }

  cout << minStudentName << '\n';
  cout << maxStudentName;
}