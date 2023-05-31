#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    int answer = A > 0 ? B > 0 ? 1 : 4 : B > 0 ? 2
                                               : 3;

    cout << answer;

    return 0;
}