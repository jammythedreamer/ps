#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    int max = -1000001, min = 1000001;
    int M;
    for (int i = 0; i < N; i++)
    {
        cin >> M;
        if (M > max)
            max = M;
        if (M < min)
            min = M;
    }

    cout << min << " " << max << "\n";

    return 0;
}