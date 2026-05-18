#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 205

int leftEnd[MAX_N];
int rightEnd[MAX_N];
int interval[MAX_N];

int main() {
    
        int N;
        cin >> N;

        int min_start = 105;

                    for(int i=0; i<N; i++){
                            cin >> leftEnd[i] >> rightEnd[i];
                                    min_start = min(min_start, leftEnd[i]);
                                        }

                                            // 음의 구간 포함시, 수평 이동
                                                if(min_start < 0){
                                                        for(int i=0; i<N; i++){
                                                                    leftEnd[i] = leftEnd[i] - min_start;
                                                                                rightEnd[i] = rightEnd[i] - min_start;
                                                                                        }
                                                                                            }

                                                                                                for(int i=0; i<N; i++){
                                                                                                        for(int j=leftEnd[i]; j<rightEnd[i]; j++){
                                                                                                                    interval[j]++;
                                                                                                                            }
                                                                                                                                }

                                                                                                                                    int ans = 0;

                                                                                                                                        for(int i=0; i<MAX_N; i++){
                                                                                                                                                ans = max(ans, interval[i]);
                                                                                                                                                    }

                                                                                                                                                        cout << ans;

                                                                                                                                                            return 0;
                                                                                                                                                            }
