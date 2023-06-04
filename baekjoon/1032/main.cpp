#include <iostream>
#include <algorithm>
#include <string>
#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    string str[N];

    FOR(i, N)
    {
        cin >> str[i];
    }
    int len = str[0].length();
    int cnt = 0;
    FOR(i, len)
    {
        bool same = true;
        FOR(j, N)
        {
            if (str[j][i] != str[0][i])
            {
                same = false;
                break;
            }
        }
        if (same)
        {
            if (cnt >= 1)
            {
                FOR(z, cnt)
                {
                    cout << "?";
                }
                cnt = 0;
            }
            cout << str[0][i];
        }
        else
        {
            cnt++;
        }
    }

    FOR(i, cnt)
    {
        cout << "?";
    }

    cout << "\n";

    return 0;
}