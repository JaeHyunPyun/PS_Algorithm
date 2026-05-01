#include <iostream>
#include <string>

using namespace std;

class Spy {
    public:
        string secret_code;
        char meeting_point;
        int time;
        Spy(string secret_code, char meeting_point, int time){
            this->secret_code = secret_code;
            this->meeting_point = meeting_point;
            this->time = time;
        }
};

int main() {
    
    string s;
    char l;
    int t;

    cin >> s >> l >> t;
    
    Spy spy = Spy(s, l, t);

    cout << "secret code : " << spy.secret_code << "\n";
    cout << "meeting point : " << spy.meeting_point << "\n";
    cout << "time : " << spy.time << "\n";

    return 0;
}