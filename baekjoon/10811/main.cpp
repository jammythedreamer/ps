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

    for (int i = 0; i < N; i++)
    {
        A[i] = i + 1;
    }

    for (int i = 0; i < M; i++)
    {
        int L, R;
        cin >> L >> R;
        int B[R - L + 1];
        for (int j = 0; j < R - L + 1; j++)
        {
            B[j] = A[L - 1 + j];
        }
        for (int j = 0; j < R - L + 1; j++)
        {
            A[L - 1 + j] = B[R - L - j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i];
        if (i != N - 1)
            cout << " ";
    }

    cout << "\n";

    return 0;
}