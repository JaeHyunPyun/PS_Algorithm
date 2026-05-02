#include <iostream>
#include <string>

using namespace std;

class Bomb{
    public:
        string code;
        char color;
        int second;
        Bomb(string code, char color, int second){
            this->code = code;
            this->color = color;
            this->second = second;
        }
};

int main() {

    string code;
    char color;
    int time;

    cin >> code >> color >> time;

    Bomb bomb = Bomb(code, color, time);

    cout << "code : " << bomb.code << "\n";
    cout << "color : " << bomb.color << "\n";
    cout << "second : " << bomb.second;

    return 0;
}