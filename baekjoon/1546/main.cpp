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

    double max = 0;
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        double input;
        cin >> input;
        sum += input;
        if (input > max)
            max = input;
    }

    cout << sum * 100 / max / N << "\n";

    return 0;
}