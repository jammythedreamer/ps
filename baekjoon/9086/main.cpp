#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int solution();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;

    cin >> T;

    FOR(i, T)
    {
        solution();
    }

    return 0;
}

int solution()
{
    string str;
    cin >> str;

    cout << str[0] << str[str.length() - 1] << "\n";

    return 0;
}