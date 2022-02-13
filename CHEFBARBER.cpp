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
        ll n,m;
        cin >> n >> m;
        cout << n*m << endl;
    }
    return 0;
}