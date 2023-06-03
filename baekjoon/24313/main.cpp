#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A1, A0;
    int c, n;

    cin >> A1 >> A0 >> c >> n;

    if (A1 > c)
    {
        cout << 0 << "\n";
        return 0;
    }

    if (A1 == c && A0 > 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    if (A1 * n + A0 > c * n)
    {
        cout << 0 << "\n";
        return 0;
    }

    cout << 1 << "\n";

    return 0;
}