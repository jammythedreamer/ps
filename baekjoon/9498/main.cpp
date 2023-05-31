#include <iostream>

using namespace std;

int main()
{
    int SCORE;
    
    cin >> SCORE;
    
    if (SCORE >= 90) {
        cout << "A" << "\n";
    } else if (SCORE >= 80) {
        cout << "B" << "\n";
    } else if (SCORE >= 70) {
        cout << "C" << "\n";
    } else if (SCORE >= 60) {
        cout << "D" << "\n";
    } else {
        cout << "F" << "\n";
    }

    return 0;
}
