#include <iostream>

using namespace std;

int n, m;
int ans;
int A[100];

void modify(){
    if(m%2==0){
        m/=2;
    } else {
        m-=1;
    }
}

void add(int i){
    ans+=i;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    while(true){
        add(A[m-1]);
        modify();

        if(m<1) break;
    }    

    cout << ans;

    return 0;
}