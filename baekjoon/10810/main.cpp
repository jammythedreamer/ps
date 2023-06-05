#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;

    cin >> N >> M;

    int B[N];

    FOR(i, N)
    B[i] = 0;

    FOR(i, M)
    {
        int S, E, Num;
        cin >> S >> E >> Num;
        for (int j = S - 1; j <= E - 1; j++)
        {
            B[j] = Num;
        }
    }

    FOR(i, N)
    {
        cout << B[i];
        if (i != N - 1)
        {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}