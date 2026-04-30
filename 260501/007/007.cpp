#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {
    
    string s;
    string l;
    int ti;

    cin >> s >> l >> ti;
    
    tuple<string, string, int> t = make_tuple(s, l, ti);

    string secret_code;
    string meeting_point;
    int time;
    
    tie(secret_code, meeting_point, time) = t;

    cout << "secret code : " << secret_code << "\n";
    cout << "meeting point : " << meeting_point << "\n";
    cout << "time : " << time << "\n";

    return 0;
}