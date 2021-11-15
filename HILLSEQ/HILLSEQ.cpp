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
        map<ll, ll> seq;
        bool notFound = false;

        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            seq[x]++;
            
            if(seq[x] > 2)
            {
                notFound = true;
            }
        }

        if ((*seq.rbegin()).second > 1)
        {
            notFound = true;
        }

        if (notFound)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (auto e : seq)
            {
                if (e.second > 1)
                    cout << e.first << " ";
            }
            for (auto e = seq.rbegin(); e != seq.rend(); e++)
            {
                cout << e->first << " ";
            }
            cout << endl;
        }
    }
    return 0;
}