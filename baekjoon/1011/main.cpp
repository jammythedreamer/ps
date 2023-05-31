#include <iostream>
#include <math.h>
using namespace std;

int solution();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        solution();
    }

    return 0;
}

int solution()
{
    int A, B;
    cin >> A >> B;
    int dis = B - A;

    int r = sqrt(dis);
    if (dis == r * r)
    {
        cout << 2 * r - 1 << "\n";
    }
    else if (dis <= r * (r + 1))
    {
        cout << 2 * r << "\n";
    }
    else
    {
        cout << 2 * r + 1 << "\n";
    }

    return 0;
}