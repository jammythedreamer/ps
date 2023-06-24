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

    char A[N][N];

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < N; j++)
        {
            A[i][j] = str[j];
        }
    }

    int max = 0;

    for (int i = 0; i < N; i++)
    {
        int f = 0;
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                continue;
            if (A[i][j] == 'Y')
            {
                f++;
            }
            else
            {
                for (int k = 0; k < N; k++)
                {
                    if (A[i][k] == 'Y' && A[k][j] == 'Y')
                    {
                        f++;
                        break;
                    }
                }
            }
        }
        if (f > max)
            max = f;
    }

    cout << max << "\n";

    return 0;
}