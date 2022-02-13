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

ll calculate(ll n);

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
        cout << calculate(n) << endl;
    }
    return 0;
}

ll calculate(ll n)
{
    double result = pow((0.143 * n), n);
    ll floorResult = floor(result);
    return (result - floorResult) < 0.5 ? floorResult : floorResult + 1;
}