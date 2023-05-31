#include <iostream>

using namespace std;

int main()
{
    int N, X;

    cin >> N >> X;

    bool isFirst = true;
    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        if (input < X)
        {
            if (isFirst)
            {
                isFirst = false;
            }
            else
            {
                cout << " ";
            }
            cout << input;
        }
    }
    cout << "\n";

    return 0;
}