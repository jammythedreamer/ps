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

    FOR(i, N)
    {
        FOR(j, i + 1)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}