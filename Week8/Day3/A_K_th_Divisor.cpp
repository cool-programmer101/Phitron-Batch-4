#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> divisors;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if ((n / i) != i)
            {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    if (divisors.size() >= k)
    {
        cout << divisors[k - 1] << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
