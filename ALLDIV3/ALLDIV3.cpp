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

//Reference Link : https://www.youtube.com/watch?v=LtMdieYBW24 

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

        ll remainders_count[3] = {0}; //Count Numbers for n/3 remainter -> 0, 1, 2

        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            remainders_count[temp % 3]++;
        }

        ll sum_of_remainders = remainders_count[1] * 1 + remainders_count[2] * 2;

        if (sum_of_remainders % 3 != 0)
            ans = -1;
        else
        {
            if (remainders_count[2] >= remainders_count[1])
            {
                ans += remainders_count[1];

                ans += ((ll)((remainders_count[2] - remainders_count[1])/3))*2;
            }
            else
            {
                ans += remainders_count[2];

                ans += ((ll)((remainders_count[1] - remainders_count[2])/3))*2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}