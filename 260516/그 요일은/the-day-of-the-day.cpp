#include <iostream>
#include <string>
#include <vector>

using namespace std;

int daysOfMonth[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
vector<string> date = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int calculateNthDay(int m, int d){
    
    int cnt = 0;

    for (int i=1; i<m; i++){
        cnt += daysOfMonth[i];
    }

    cnt += d;

    return cnt;
}

int calculateHopToTargetDate(string targetDate){
    for(int i=0; i<date.size(); i++){
        if(date[i]==targetDate){
            return i;
        }
    }
}

int countTargetDate(int targetNthDay, int endNthDay){
    int cnt = 0;
    int curr = targetNthDay;

    while(true){
        if(curr > endNthDay) break;    
        cnt++;
        curr += 7;
    }

    return cnt;
}

int main() {

    int m1, d1, m2, d2;
    string A;

    cin >> m1 >> d1 >> m2 >> d2 >> A;

    int startNthDay = calculateNthDay(m1, d1);
    int endNthDay = calculateNthDay(m2, d2);
    int hopToTargetDate = calculateHopToTargetDate(A);

    int targetNthDay = startNthDay + hopToTargetDate;

    int targetCount = countTargetDate(targetNthDay, endNthDay);

    cout << targetCount;

    return 0;
}