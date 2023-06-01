#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str, ans;

    cin >> str;

    int len = str.length();

    for (int i = 1; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            string tstr = str;
            reverse(tstr.begin(), tstr.begin() + i);
            reverse(tstr.begin() + i, tstr.begin() + j);
            reverse(tstr.begin() + j, tstr.end());
            if (i == 1 && j == 2)
            {
                ans = tstr;
            }
            if (tstr < ans)
                ans = tstr;
        }
    }

    cout << ans << "\n";
    return 0;
}