#include <iostream>
#define MAX_DEV_NUMBER 105

using namespace std;

int N, K, P, T;
int t[250];
int x[250];
int y[250];

int dev_status[MAX_DEV_NUMBER], attack_count[MAX_DEV_NUMBER];

int main() {
    cin >> N >> K >> P >> T;

    for (int i = 0; i < T; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    // 첫번째 감영자 초기화
    dev_status[P-1]=1;
    attack_count[P-1]=K;

    int time = 0;

    while (time<=250){
        for (int i = 0; i < T; i++) {
            if(t[i]==time){
                bool is_x_infectable = dev_status[x[i]-1]==1 && attack_count[x[i]-1]>0;
                bool is_y_infectable = dev_status[y[i]-1]==1 && attack_count[y[i]-1]>0;
                if(is_x_infectable && is_y_infectable){
                    // 1. 둘 다 감염시킬 수 있는 경우
                    attack_count[x[i]-1]--;
                    attack_count[y[i]-1]--;
                } else if(is_x_infectable){
                    // 2. x만 감염시킬 수 있는 경우
                    attack_count[x[i]-1]--;
                    // 2-1. y가 감염 안된 경우
                    if(dev_status[y[i]-1]==0){
                        dev_status[y[i]-1]=1;
                        attack_count[y[i]-1]=K;
                    } 
                } else if(is_y_infectable){
                    attack_count[y[i]-1]--;
                    if(dev_status[x[i]-1]==0){
                        dev_status[x[i]-1]=1;
                        attack_count[x[i]-1]=K;
                    }
                }
            }
        }

        time++;
    }


    for (int i=0; i<N; i++){
        cout << dev_status[i];
    }


    return 0;
}