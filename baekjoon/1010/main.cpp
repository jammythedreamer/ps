#include <iostream>

using namespace std;

int solution();

int dp[30][30] = {};

int main()
{
    int T;
    cin >> T;

    dp[1][0]=1;
    dp[1][1]=1;

    for (int i = 2; i < 30; i++) {
        for (int j = 0; j <= i; j++) { 
            if (j==0) {
                dp[i][0] = 1;
                continue;
            }
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }

    for (int i = 0; i < T; i++) {
        solution();
    }

    return 0;
}

int solution() {
    int N, M;
    cin >> N >> M;

    cout << dp[M][M-N] << endl;

    return 0;
}