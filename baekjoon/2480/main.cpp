#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A, B, C;

    cin >> A >> B >> C;

    if (A == B && B == C)
    {
        cout << 10000 + A * 1000 << "\n";
        return 0;
    }

    if (A == B || B == C)
    {
        cout << 1000 + B * 100 << "\n";
        return 0;
    }

    if (C == A)
    {
        cout << 1000 + C * 100 << "\n";
        return 0;
    }

    int max = A;
    if (B > max)
        max = B;
    if (C > max)
        max = C;

    cout << 100 * max << "\n";

    return 0;
}