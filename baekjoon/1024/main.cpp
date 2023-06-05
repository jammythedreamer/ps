#include <iostream>
#include <algorithm>
#include <math.h>
#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, L;

    cin >> N >> L;

    bool flag = false;
    while (L <= 100)
    {
        if (L % 2 == 1)
        {
            if (N % L == 0 && ((N / L - (L - 1) / 2) >= 0))
            {
                flag = true;
                for (int i = N / L - (L - 1) / 2; i <= N / L + (L - 1) / 2; i++)
                {
                    cout << i;
                    if (i != N / L + (L - 1) / 2)
                        cout << " ";
                }
                cout << "\n";
            }
        }
        else if (L % 2 == 0)
        {
            if ((N + L / 2) % L == 0 && ((N + L / 2) / L - L / 2 >= 0))
            {
                flag = true;
                for (int i = (N + L / 2) / L - L / 2; i <= (N + L / 2) / L + L / 2 - 1; i++)
                {
                    cout << i;
                    if (i != (N + L / 2) / L + L / 2)
                        cout << " ";
                }
                cout << "\n";
            }
        }
        if (flag)
            break;
        L++;
    }

    if (!flag)
    {
        cout << "-1"
             << "\n";
    }
    return 0;
}