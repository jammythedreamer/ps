#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;

    cin >> N >> M;

    int S[M], E[M];

    for (int i = 0; i < M; i++)
    {
        cin >> S[i] >> E[i];
    }

    sort(S, S + M);
    sort(E, E + M);

    int a = N / 6;
    int b = N % 6;

    int sum = 0;
    if (E[0] * 6 < S[0])
    {
        sum += E[0] * 6 * a;
    }
    else
    {
        sum += S[0] * a;
    }
    if (S[0] < E[0] * b)
    {
        sum += S[0];
    }
    else
    {
        sum += E[0] * b;
    }

    cout << sum << "\n";

    return 0;
}