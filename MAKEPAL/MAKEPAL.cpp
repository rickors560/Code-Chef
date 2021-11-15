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
        ll n;
        vector<ll> a;

        vector<ll> odd;

        cin >> n;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);

            if (x % 2 != 0)
            {
                odd.push_back(x);
            }
        }

        if (odd.size() == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ceil(odd.size()/2) << endl;
        }
    }
    return 0;
}