#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int max = 0;
    int max_index;

    for (int i = 1; i <= 9; i++)
    {
        int input;

        cin >> input;

        if (input > max)
        {
            max = input;
            max_index = i;
        }
    }

    cout << max << "\n"
         << max_index << "\n";

    return 0;
}