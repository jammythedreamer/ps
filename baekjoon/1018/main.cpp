#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;

    cin >> N >> M;

    bool C[N][M];

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < M; j++)
        {
            C[i][j] = str[j] == 'W' ? false : true;
        }
    }

    int min = 64;
    for (int x = 0; x <= N - 8; x++)
    {
        for (int y = 0; y <= M - 8; y++)
        {
            int cnt = 0;
            for (int i = x; i < x + 8; i++)
            {
                for (int j = y; j < y + 8; j++)
                {
                    if ((i + j) % 2 == 0)
                    {
                        if (C[i][j])
                            cnt++;
                    }
                    else
                    {
                        if (!C[i][j])
                            cnt++;
                    }
                }
            }
            if (cnt < min)
                min = cnt;
            if (64 - cnt < min)
                min = 64 - cnt;
        }
    }

    cout << min << "\n";

    return 0;
}