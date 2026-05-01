#include <iostream>
#include <algorithm>

#define MAX_N 5

using namespace std;

char codename[MAX_N];
int score[MAX_N];

class Agent{
    public:
        char code_name;
        int score;
        Agent(char code_name = 'A', int score = 0){
            this->code_name = code_name;
            this->score = score;
        }
};

int main() {
    Agent agents[MAX_N];

    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
        agents[i] = Agent(codename[i], score[i]);
    }

    int min_score = *min_element(score, score+MAX_N);

    for(auto agent : agents){
        if(agent.score == min_score){
            cout << agent.code_name << " " << agent.score;
            break;
        }
    }
    

    return 0;
}
