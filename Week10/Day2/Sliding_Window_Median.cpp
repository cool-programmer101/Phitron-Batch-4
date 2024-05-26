#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define sort(a) sort(a.begin(), a.end());
#define mod 1000000007
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    pbds<pair<int, int>> p;
    while (r < n)
    {
        p.insert({a[r], r});
        if (r - l + 1 == k)
        {
            int pos = k / 2;
            if (k % 2 == 0)
            {
                pos--;
            }
            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({a[l], l});
            l++;
        }
        r++;
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
