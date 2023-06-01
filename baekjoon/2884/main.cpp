#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A, B;
    int H, M;

    cin >> A >> B;

    bool flag = false;
    if (B < 45)
    {
        M = B + 60 - 45;
        flag = true;
    }
    else
    {
        M = B - 45;
    }

    if (flag)
    {
        if (A == 0)
        {
            H = 23;
        }
        else
        {
            H = A - 1;
        }
    }
    else
    {
        H = A;
    }

    cout << H << " " << M << "\n";

    return 0;
}