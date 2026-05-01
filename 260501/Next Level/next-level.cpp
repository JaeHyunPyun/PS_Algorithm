#include <iostream>
#include <string>

using namespace std;

class Account {
    public:
        string id;
        int level;
        Account(string id = "", int level = 0){
            this->id = id; 
            this->level = level;
        }
};

int main() {
    string user_id;
    int user_level;

    cin >> user_id >> user_level;

    Account user1 = Account("codetree", 10);
    Account user2 = Account(user_id, user_level);

    cout << "user " << user1.id << " lv " << user1.level << "\n";
    cout << "user " << user2.id << " lv " << user2.level << "\n";

    return 0;
}