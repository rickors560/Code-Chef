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

//Reference Link: https://www.youtube.com/watch?v=mfpAtD_u-AIs

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
        for (ll i = 0; i < n; i++){
            cin >> a[i];
        }

        ll ans = 0;
        for (ll i = 0; i < 64; i++) //For (10 power 18) Input limit max bits will be 60 bits.
        {
            ll XOR = 0;

            for (ll j = 0; j < n; j++)
                XOR ^= a[j];

            ll ithPowerof2 = 1LL << i;

            ll ithXORBit = XOR & ithPowerof2;

            //As for (10 power 18) number + (10 power 18) number, doesn't produce 63th bit = 1 and that means no ans available.
            if (i == 63 && ithXORBit)
            {
                ans = -1;
                break;
            }

            if (ithXORBit)
            {
                ans += ithPowerof2;
                for (ll j = 0; j < n; j++)
                    a[j] += ithPowerof2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}