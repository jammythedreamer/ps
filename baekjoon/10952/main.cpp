#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (true)
    {
        int A, B;

        cin >> A >> B;

        if (A == 0 && B == 0)
            break;

        cout << A + B << "\n";
    }

    return 0;
}