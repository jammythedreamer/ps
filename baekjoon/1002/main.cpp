#include <iostream>

using namespace std;
int solution();

int main()
{
    int T;
    int A, B;
    
    cin >> T;

    for (int i = 0; i < T; i++) {
        solution();
    }

    return 0;
}

int solution() {
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    if (x1 == x2 && y1 == y2 && r1 == r2) {
        cout << -1 << endl;
        return 0;
    }

    int d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    int r = (r1+r2)*(r1+r2);
    int rm = (r1-r2)*(r1-r2);

    if (d == r || d == rm) {
        cout << 1 << endl;
    } else if (d < r && d > rm) {
        cout << 2 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}