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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long t;
    cin >> t;
    for (long T = 0; T < t; T++)
    {
        ll n, m;
        cin >> n >> m;

        vector<pair<ll, ll>> points;
        vector<pair<ll, ll>> g;

        for (int i = 1; i < n; i++)
        {
            points.push_back(make_pair(i, i + 1));
            m--;
        }

        for (ll i = 0; i < points.size(); i++)
        {

            for (ll j = i; j >= 0; j--)
            {
                if (m == 0)
                {
                    break;
                }

                auto p1 = points[j];
                auto p2 = points[i];

                if (p1.first != p2.second && abs(p1.first - p2.second) > 1)
                {
                    points.push_back(make_pair(p1.first, p2.second));
                    m--;
                }
            }

            if (m == 0)
            {
                break;
            }
        }

        for (auto p : points)
        {
            cout << p.first << " " << p.second << endl;
        }
    }
    return 0;
}