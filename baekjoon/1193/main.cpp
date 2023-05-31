#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    int sum = 0;
    int i = 0;

    while (sum < N)
    {
        i++;
        sum += i;
    }

    if (i % 2 == 0)
        cout << i - sum + N << "/" << sum - N + 1 << "\n";
    else
        cout << sum - N + 1 << "/" << i - sum + N << "\n";

    return 0;
}