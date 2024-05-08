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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    string ans;
    vector<ll> ar;

    bool success = true;
    for (int i = 0; i < n; ++i)
    {
        if (ar.empty())
        {
            ans.push_back('1');
            ar.push_back(arr[i]);
        }
        else if (success)
        {
            if (arr[i] >= ar.back())
            {
                ans.push_back('1');
                ar.push_back(arr[i]);
            }
            else if (arr[i] > ar[0])
                ans.push_back('0');
            else
            {
                ans.push_back('1');
                ar.push_back(arr[i]);
                success = false;
            }
        }
        else
        {
            if (arr[i] < ar.back())
                ans.push_back('0');
            else if (arr[i] > ar[0])
                ans.push_back('0');
            else
            {
                ans.push_back('1');
                ar.push_back(arr[i]);
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
