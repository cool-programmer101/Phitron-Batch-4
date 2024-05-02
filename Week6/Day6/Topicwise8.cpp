#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
typedef long long int lli;

int n, k;
vector<lli> a, b;

bool calc(lli x)
{
    lli cnt = 0;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (a[i] + b[j] >= x)
        {
            j++;
        }
        else
        {
            i++;
            cnt += (n - j);
        }
    }
    return cnt < k;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<lli>());
    lli l = 1, r = 2e9 + 10;
    for (int i = 0; i < 80; i++)
    {
        lli mid = (l + r) / 2;
        if (calc(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << endl;
    return 0;
    return 0;
}
