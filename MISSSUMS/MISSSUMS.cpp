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
        cin >> n;

        //Can try out with brute force its always odd numbers

        for (ll i = 1; i <= 100000; i++)
        {
            if (i % 2 != 0 && n > 0)
            {
                cout << i << " ";
                n--;
            }
        }

        cout << endl;
    }
    return 0;
}