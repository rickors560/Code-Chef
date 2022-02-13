#include <iostream>
#include <cstdio>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <fstream>
#include <iomanip>

using namespace std;

#define ll long long

string solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long t;
    cin >> t;
    for (long T = 0; T < t; T++)
    {
        cout << solve() << endl;
    }
    return 0;
}

string solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int l = 0, r = n - 1;

    int count = 0;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            count++;
        }

        l++;
        r--;
    }

    if (count <= k)
    {
        if (s.size() % 2 == 1)
            return "YES";

        else
        {
            if ((k - count) % 2 == 0)
                return "YES";
            else
                return "NO";
        }
    }
    else
    {
        return "NO";
    }
}
