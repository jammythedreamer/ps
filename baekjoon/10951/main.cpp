#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int main()
{

    int A, B;

    while (true)
    {
        if (!(cin >> A >> B))
        {
            break;
        }

        cout << A + B << "\n";
    }

    return 0;
}