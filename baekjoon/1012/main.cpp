#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

bool A[51][51], checked[51][51];
int cnt;

int solution();
void search(int x, int y, int M, int N);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;

    cin >> T;

    FOR(x, T)
    {
        solution();
    }

    return 0;
}

int solution()
{
    int M, N, K;
    cin >> M >> N >> K;

    FOR(i, M)
    {
        FOR(j, N)
        {
            A[i][j] = false;
            checked[i][j] = false;
        }
    }

    FOR(i, K)
    {
        int x, y;
        cin >> x >> y;
        A[x][y] = true;
    }

    cnt = 0;

    FOR(i, M)
    {
        FOR(j, N)
        {
            if (A[i][j])
            {
                if (!checked[i][j])
                {
                    search(i, j, M, N);
                    cnt++;
                }
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}

void search(int x, int y, int M, int N)
{
    if (!A[x][y] || checked[x][y])
        return;
    checked[x][y] = true;

    if (x > 0)
    {
        search(x - 1, y, M, N);
    }
    if (x < M - 1)
    {
        search(x + 1, y, M, N);
    }
    if (y > 0)
    {
        search(x, y - 1, M, N);
    }
    if (y < N - 1)
    {
        search(x, y + 1, M, N);
    }
}