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
        ll a, b;
        cin >> a >> b;

        if((a+b)%2 != 0){
            cout << "Alice";
        }
        else{
            cout << "Bob";
        }
        cout << endl;
    }
    return 0;
}