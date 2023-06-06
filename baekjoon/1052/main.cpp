#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int g(int n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;

    cin >> N >> K;

    if (N <= K)
    {
        cout << 0 << "\n";
        return 0;
    }

    int m;
    for (int i = 0; i < K; i++)
    {
        m = g(N);
        if (N == m)
        {
            break;
        }
        N = N - m;
    }
    if (m - N < 0)
    {
        cout << -1 << "\n";
        return 0;
    }
    cout << m - N << "\n";

    return 0;
}

int g(int n)
{
    int k = 1;
    while (true)
    {
        if (n < k * 2)
        {
            break;
        }
        k *= 2;
    }
    return k;
}