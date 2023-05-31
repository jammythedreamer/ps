#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <set>

using namespace std;

int cmp(string a, string b)
{
    if (a.length() != b.length())
    {
        return a.length() < b.length();
    }
    return b > a;
}

int main()
{
    int N;

    cin >> N;

    set<string> s;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    vector<string> v(s.begin(), s.end());

    sort(v.begin(), v.end(), cmp);

    for (string i : v)
    {
        cout << i << endl;
    }

    return 0;
}
