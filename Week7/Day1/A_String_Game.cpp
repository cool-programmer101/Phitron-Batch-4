#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt = 0;
        for (int i = 0; i < n - 1; i += 2)
        {
            if (s[i] != s[i + 1])
            {
                cnt++;
            }
        }
        if (cnt % 2)
            cout << "Zlatan\n";

        else
            cout << "Ramos\n";
    }
}
