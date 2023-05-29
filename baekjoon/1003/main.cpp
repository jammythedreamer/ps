#include <iostream>

using namespace std;
int solution();

int dp0[41] = {1, 0, };
int dp1[41] = {0, 1, };

int main()
{
    int T;
    
    cin >> T;

    for (int i =2; i<41; i++) {
        dp0[i] = dp0[i-1] + dp0[i-2];
        dp1[i] = dp1[i-1] + dp1[i-2];
    }
    
    while (T--) {
        solution();
    }

    return 0;
}

int solution() {
    int N;
    cin >> N;

    cout << dp0[N] << " " << dp1[N] << endl;
    return 0;
}