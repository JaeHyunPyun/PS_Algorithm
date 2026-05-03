#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define MAX_N 105

int StringToInt(string s){
    char base = '0';
    int number = 0;

    for(int i = 0; i < s.length(); i++){
        number += (int)((s[i] - base) * pow(10, s.length()-1-i));
    }
    
    return number;
}

class RainDate{
    public:
        int year;
        int month;
        int dayOfMonth;
        string year_str;
        string month_str;
        string dayOfMonth_str;

        RainDate(string s){
            int first_index = s.find("-");
            int second_index = s.find("-", first_index+1);

            string year_str = s.substr(0, first_index-0);
            string month_str = s.substr(first_index+1, second_index-first_index-1);
            string day_str = s.substr(second_index+1, s.length()-second_index-1);

            this->year = StringToInt(year_str);
            this->month = StringToInt(month_str);
            this->dayOfMonth =StringToInt(day_str);
            this->year_str = year_str;
            this->month_str = month_str;
            this->dayOfMonth_str = day_str;
        }
        RainDate(){}

        int compare(RainDate other){
            if(this->year < other.year) return -1;
            else if (this->year > other.year) return 1;
            else {
                if(this->month < other.month) return -1;
                else if (this->month > other.month) return 1;
                else {
                    if(this->dayOfMonth < other.dayOfMonth) return -1;
                    else if (this->dayOfMonth > other.dayOfMonth) return 1;
                    else return 0;
                }
            }
        }

        void print(){
            cout << this->year_str << "-" << this->month_str << "-" << this->dayOfMonth_str << " ";
        }
};

class Forecast{
    public:
        RainDate rainDate;
        string day;
        string weather;
        Forecast(RainDate rainDate, string day, string weather){
            this->rainDate = rainDate;
            this->day = day;
            this->weather = weather;
        }
        Forecast(){}
};


int main() {
    // Please write your code here.

    int n;
    cin >> n;

    int target_index;
    RainDate target_raindate = RainDate("9999-99-99");
    Forecast forecasts[MAX_N];

    for(int i = 0; i < n; i++){
        string date, day, weather;

        cin >> date >> day >> weather;

        RainDate curDate = RainDate(date);
        
        if(weather == "Rain"){
            if(target_raindate.year == 9999){
                target_index = i;
                target_raindate = curDate;
            } else {
                if(curDate.compare(target_raindate) < 0){
                    target_index = i;
                    target_raindate = curDate;
                }
            }
        }
        
        forecasts[i] = Forecast(curDate, day, weather);
    }

    forecasts[target_index].rainDate.print();
    cout << forecasts[target_index].day << " " <<  forecasts[target_index].weather;
    


    return 0;
}