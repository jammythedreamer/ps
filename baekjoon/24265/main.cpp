#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int n;

    cin >> n;

    cout << n * (n - 1) / 2 << "\n"
         << 2 << "\n";

    return 0;
}