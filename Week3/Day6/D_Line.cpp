#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int d[n];
        long long c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                d[i] = i;
            else
                d[i] = n - 1 - i;
            c += d[i];
        }
        sort(d, d + n);
        for (int i = 0; i < n; ++i)
        {
            if (n - 1 - 2 * d[i] > 0)
                c += n - 1 - 2 * d[i];
            cout << c << " ";
        }
        cout << endl;
    }
}