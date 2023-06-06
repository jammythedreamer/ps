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

    int A[N];

    FOR(i, N)
    {
        A[i] = i + 1;
    }

    FOR(i, M)
    {
        int X, Y;
        cin >> X >> Y;
        int tmp = A[X - 1];
        A[X - 1] = A[Y - 1];
        A[Y - 1] = tmp;
    }

    FOR(i, N)
    {
        cout << A[i];
        if (i < N - 1)
            cout << " ";
    }
    cout << "\n";

    return 0;
}