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

    int cnt = 0;

    FOR(x, N)
    {
        string str;
        cin >> str;
        bool isGroup = true;
        for (int i = 1; i < str.length(); i++)
        {
            int flag = 0;
            for (int j = 0; j < i; j++)
            {
                if (str[j] == str[i])
                {
                    if (flag == 0)
                        flag = 1;
                }
                else
                {
                    if (flag == 1)
                        flag = 2;
                }
            }
            if (flag == 2)
            {
                isGroup = false;
                break;
            }
        }
        if (isGroup)
            cnt++;
    }

    cout << cnt << "\n";

    return 0;
}