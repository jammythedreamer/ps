#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool S[30] = {false};

    FOR(i, 28)
    {
        int input;
        cin >> input;
        S[input - 1] = true;
    }

    FOR(i, 30)
    {
        if (!S[i])
            cout << i + 1 << "\n";
    }

    return 0;
}