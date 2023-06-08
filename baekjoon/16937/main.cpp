#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int H, W, N;

    cin >> H >> W >> N;

    int R[N], C[N];

    FOR(i, N)
    cin >> R[i] >> C[i];

    int max = 0;

    FOR(i, N)
    {
        FOR(j, i)
        {
            bool available = false;
            if (R[i] + R[j] <= H && C[i] <= W && C[j] <= W)
                available = true;
            if (R[i] + C[j] <= H && C[i] <= W && R[j] <= W)
                available = true;
            if (R[i] + R[j] <= W && C[i] <= H && C[j] <= H)
                available = true;
            if (R[i] + C[j] <= W && C[i] <= H && R[j] <= H)
                available = true;
            if (C[i] + C[j] <= H && R[i] <= W && R[j] <= W)
                available = true;
            if (C[i] + R[j] <= H && R[i] <= W && C[j] <= W)
                available = true;
            if (C[i] + C[j] <= W && R[i] <= H && R[j] <= H)
                available = true;
            if (C[i] + R[j] <= W && R[i] <= H && C[j] <= H)
                available = true;
            if (available)
            {
                int val = R[i] * C[i] + R[j] * C[j];
                if (val > max)
                {
                    max = val;
                }
            }
        }
    }

    cout << max << "\n";

    return 0;
}