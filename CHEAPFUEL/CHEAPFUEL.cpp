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
    for (long i = 0; i < t; i++)
    {
        ll x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;

        if((x + (k*a)) < (y + (k*b)))
            cout << "PETROL" << endl;
        else if((x + (k*a)) > (y + (k*b)))
            cout << "DIESEL" << endl;
        else if((x + (k*a)) == (y + (k*b)))
            cout << "SAME PRICE" << endl;

    }
    return 0;
}