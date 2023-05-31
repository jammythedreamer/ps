#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    if (N % 400 == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    if (N % 4 == 0)
    {
        if (N % 100 != 0)
        {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;

    return 0;
}
