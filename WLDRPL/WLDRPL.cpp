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

//Refrence Link: https://www.youtube.com/watch?v=aWFSLtPiqg4

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long t;
    cin >> t;
    for (long T = 0; T < t; T++)
    {
        string s;
        ll q;

        cin >> s >> q;
        ll n = s.length();

        stack<ll> bracketIndexs;

        vector<bool> signs(n);
        bool currentSign = true; //Positive

        for (ll i = 0; i < n; i++)
        {
            signs[i] = currentSign;

            if (s[i] == '-')
                currentSign = currentSign ? false : true;

            if (s[i] == '(')
            {
                bracketIndexs.push(i);
            }

            if (s[i] == ')')
            {
                signs[i] = signs[bracketIndexs.top()];
                bracketIndexs.pop();
                currentSign = signs[i];
            }
        }

        vector<ll> positivePrefix(n);
        vector<ll> negativePrefix(n);

        for (ll i = 1; i < n; i++)
        {
            positivePrefix[i] += positivePrefix[i - 1];
            negativePrefix[i] += negativePrefix[i - 1];
            if (s[i] == '?')
            {
                if (signs[i])
                {
                    positivePrefix[i]++;
                }
                else
                {
                    negativePrefix[i]++;
                }
            }
        }

        for (ll i = 0; i < q; i++)
        {
            ll l, r;
            cin >> l >> r;

            auto res = 0;

            l--;
            r--;

            if (l == r)
            {
                res = 1;
            }
            else
            {
                if (signs[r])
                {
                    res += positivePrefix[r];
                }
                else
                {
                    res += negativePrefix[r];
                }

                if (signs[l])
                {
                    res -= positivePrefix[l];
                }
                else
                {
                    res -= negativePrefix[l];
                }
            }
            cout << res << " ";
        }
        cout << endl;
    }
    return 0;
}