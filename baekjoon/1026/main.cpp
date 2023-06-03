#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    int A[N], B[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    sort(A, A + N, greater<int>());
    sort(B, B + N, less<int>());

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i] * B[i];
    }

    cout << sum << "\n";

    return 0;
}