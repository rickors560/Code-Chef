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

//Refrence Link : https://www.youtube.com/watch?v=lrGhg8-ycPQ

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
        cin >> n;

        vector<ll> a(n);

        map<vector<ll>, ll> diffs;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            for (ll k = i + 2; k < n; k++)
            {
                ll optimal_j = (a[i] + a[k]) / 2;
                ll j = upper_bound(a.begin(), a.end(), optimal_j) - a.begin();

                ll t1 = (a[i] - a[j]) * (a[j] - a[k]);
                ll t2 = (a[i] - a[j - 1]) * (a[j - 1] - a[k]);

                if (max(t1, t2) > 0)
                    ans += max(t1, t2);
            }
        }

        cout << ans << endl;
    }
    return 0;
}