#include <iostream>

using namespace std;

int main()
{
    int X;

    cin >> X;

    int rest = 0;
    int min = 64;
    int cnt = 1;

    while(min != 0) {
        if (rest+min == X) {
            cout << cnt << endl;
            break;
        }
        if (rest + min > X) {
            rest += min/2;
            min = min /2;
            cnt = cnt + 1;
            if (rest >= X) {
                rest -= min;
                cnt = cnt - 1;
            }
        }
    }

    return 0;
}
