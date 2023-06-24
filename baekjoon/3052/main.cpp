#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool res[42];

    for (int i = 0; i < 42; i++)
    {
        res[i] = false;
    }

    for (int i = 0; i < 10; i++)
    {
        int input;
        cin >> input;
        int r = input % 42;
        res[r] = true;
    }

    int cnt = 0;
    for (int i = 0; i < 42; i++)
    {
        if (res[i])
            cnt++;
    }

    cout << cnt << "\n";

    return 0;
}