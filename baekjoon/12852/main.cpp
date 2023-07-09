#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    int cnt = 0;

    int dp[N + 1];
    dp[1] = 0;
    for (int i = 2; i <= N; i++)
    {
        int a = i % 3 == 0 ? dp[i / 3] + 1 : 9999999;
        int b = i % 2 == 0 ? dp[i / 2] + 1 : 9999999;
        int c = dp[i - 1] + 1;
        dp[i] = min(a, min(b, c));
    }

    cout << dp[N] << "\n";

    while (true)
    {
        cout << N;
        if (N == 1)
        {
            cout << "\n";
            break;
        }
        cout << " ";
        int a = N % 3 == 0 ? dp[N / 3] + 1 : 9999999;
        int b = N % 2 == 0 ? dp[N / 2] + 1 : 9999999;
        int c = dp[N - 1] + 1;
        int m = min(a, min(b, c));
        if (m == a)
        {
            N /= 3;
        }
        else if (m == b)
        {
            N /= 2;
        }
        else
        {
            N -= 1;
        }
    }

    return 0;
}