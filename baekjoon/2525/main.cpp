#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A, B, C;

    cin >> A >> B >> C;

    int M = B + C;
    int H = A;

    while (M >= 60)
    {
        H += 1;
        M -= 60;
    }
    while (H >= 24)
    {
        H -= 24;
    }

    cout << H << " " << M << "\n";

    return 0;
}