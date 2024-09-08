#include <iostream>
#include <string>
#include <typeinfo>
#include <math.h>
 
using namespace std;
 
int str_to_int(string substr)
{
    int str_leng = substr.length();
    int num_result = 0;
 
    for (int i = 0; i < str_leng; i++)
    {
        num_result += int(substr[i]-48) * powf(10, str_leng - 1 - i);
    }
 
    return num_result;
}
 
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
    /*
       아래의 freopen 함수는 input.txt 를 read only 형식으로 연 후,
       앞으로 표준 입력(키보드) 대신 input.txt 파일로부터 읽어오겠다는 의미의 코드입니다.
       //여러분이 작성한 코드를 테스트 할 때, 편의를 위해서 input.txt에 입력을 저장한 후,
       freopen 함수를 이용하면 이후 cin 을 수행할 때 표준 입력 대신 파일로부터 입력을 받아올 수 있습니다.
       따라서 테스트를 수행할 때에는 아래 주석을 지우고 이 함수를 사용하셔도 좋습니다.
       freopen 함수를 사용하기 위해서는 #include <cstdio>, 혹은 #include <stdio.h> 가 필요합니다.
       단, 채점을 위해 코드를 제출하실 때에는 반드시 freopen 함수를 지우거나 주석 처리 하셔야 합니다.
    */
    //freopen("input.txt", "r", stdin);
    cin >> T;
    /*
       여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
    */
    string test_date;
 
    for (test_case = 1; test_case <= T; ++test_case)
    {
        cin >> test_date;
        string test_y = test_date.substr(0, 4);
        string test_m = test_date.substr(4, 2);
        string test_d = test_date.substr(6, 2);
        int test_y_int = str_to_int(test_y);
        int test_m_int = str_to_int(test_m);
        int test_d_int = str_to_int(test_d);
         
        //cout << test_d_int << " " << typeid(test_d_int).name() << endl;
        //cout << test_y_int << " " << test_m_int << " " << test_d_int << endl;
        //유효성 검증
        if (1 <= test_m_int and test_m_int <= 12)
        {
            if (test_m_int == 1 or test_m_int == 3 or test_m_int == 5 or test_m_int == 7 or test_m_int == 8 or test_m_int == 10 or test_m_int == 12)
            {
                if (1 <= test_d_int and test_d_int <= 31)
                {
                    cout << "#" << test_case << " " << test_y <<"/"<<test_m<<"/"<<test_d<< endl;
                }
                else
                {
                    cout << "#" << test_case << " " << -1 << endl;
                }
            }
            else if (test_m_int == 4 or test_m_int == 6 or test_m_int == 9 or test_m_int == 11)
            {
                if (1 <= test_d_int and test_d_int <= 30)
                {
                    cout << "#" << test_case << " " << test_y << "/" << test_m << "/" << test_d << endl;
                }
                else
                {
                    cout << "#" << test_case << " " << -1 << endl;
                }
            }
            else
            {
                if (1 <= test_d_int and test_d_int <= 28)
                {
                    cout << "#" << test_case << " " << test_y << "/" << test_m << "/" << test_d << endl;
                }
                else
                {
                    cout << "#" << test_case << " " << -1 << endl;
                }
            }
        }
        else
        {
            cout << "#" << test_case << " " << -1 << endl;
        }
 
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}