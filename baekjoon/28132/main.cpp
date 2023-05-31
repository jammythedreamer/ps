#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int abs(int x)
{
    if (x >= 0)
        return x;
    else
        return -1 * x;
}

int gcd(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 1;
    }
    int mod = a % b;

    while (mod > 0)
    {
        a = b;
        b = mod;
        mod = a % b;
    }

    return b;
}

int main()
{
    int N;

    cin >> N;

    map<pair<int, int>, pair<int, int>> m;

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        int ax = abs(x);
        int ay = abs(y);
        int g = gcd(ax, ay);
        int bx = ax / g;
        int by = ay / g;

        if (x == 0 && y == 0)
        {
            bx = 0;
            by = 0;
        }
        else if (x == 0)
        {
            by = 1;
        }
        else if (y == 0)
        {
            bx = 1;
        }
        if (x == 0 && y == 0)
        {
            pair<int, int> keyPair = make_pair(0, 0);
            if (m.find(keyPair) != m.end())
            {
                pair<int, int> pre = m[keyPair];
                pre.first++;
                m[keyPair] = pre;
            }
            else
            {
                m[keyPair] = make_pair(1, 0);
            }
        }
        else if (x == 0)
        {
            pair<int, int> keyPair = make_pair(1, 0);
            if (m.find(keyPair) != m.end())
            {
                pair<int, int> pre = m[keyPair];
                pre.second++;
                m[keyPair] = pre;
            }
            else
            {
                m[keyPair] = make_pair(0, 1);
            }
        }
        else if (y == 0)
        {
            pair<int, int> keyPair = make_pair(1, 0);
            if (m.find(keyPair) != m.end())
            {
                pair<int, int> pre = m[keyPair];
                pre.first++;
                m[keyPair] = pre;
            }
            else
            {
                m[keyPair] = make_pair(1, 0);
            }
        }
        else if ((x > 0 && y > 0) || (x < 0 && y < 0))
        {
            pair<int, int> keyPair = make_pair(bx, by);
            if (m.find(keyPair) != m.end())
            {
                pair<int, int> pre = m[keyPair];
                pre.first++;
                m[keyPair] = pre;
            }
            else
            {
                m[keyPair] = make_pair(1, 0);
            }
        }
        else
        {
            pair<int, int> keyPair = make_pair(by, bx);
            if (m.find(keyPair) != m.end())
            {
                pair<int, int> pre = m[keyPair];
                pre.second++;
                m[keyPair] = pre;
            }
            else
            {
                m[keyPair] = make_pair(0, 1);
            }
        }
    }

    long long int cnt = 0;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->first.first == 0 && it->first.second == 0)
        {
            int k = it->second.first;
            for (int i = 1; i <= k; i++)
            {
                cnt += N - i;
            }
            continue;
        }
        cnt += (long long int)(it->second.first) * (it->second.second);
    }

    cout << cnt << endl;

    return 0;
}
