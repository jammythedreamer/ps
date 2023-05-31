#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int arr[201];

    for (int i =0; i <= 200; i++) {
        arr[i] = 0;
    }

    for (int i =0; i< N; i++) {
        int input;
        cin >> input;

        arr[input+100] += 1;
    }

    int v;

    cin >> v;

    cout << arr[v+100] << endl;

    return 0;
}
