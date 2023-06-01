#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int X, N;

    cin >> X >> N;

    for (int i = 0; i < N; i++)
    {
        int P, C;
        cin >> P >> C;
        X -= P * C;
    }

    if (X == 0)
    {
        cout << "Yes"
             << "\n";
    }
    else
    {
        cout << "No"
             << "\n";
    }

    return 0;
}