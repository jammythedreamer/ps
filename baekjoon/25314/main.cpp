#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    for (int i = 0; i < N / 4; i++)
    {
        cout << "long ";
    }
    cout << "int"
         << "\n";

    return 0;
}