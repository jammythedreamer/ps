#include <iostream>
#include <algorithm>

#define FOR(x, n) for (int x = 0; x < (n); x++)

using namespace std;

int solution(int i);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;

    cin >> T;

    FOR(i, T)
    {
        solution(i + 1);
    }

    return 0;
}

int solution(int i)
{
    int A, B;
    cin >> A >> B;

    cout << "Case #" << i << ": " << A + B << "\n";

    return 0;
}