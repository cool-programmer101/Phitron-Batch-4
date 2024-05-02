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
vector<lli> pos;
bool good(lli x)
{
    bool flag = 1;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        while (j < n && pos[i] + x > pos[j])
            j++;
        if (j == n)
            break;
        count++;
        i = j - 1;
    }
    return count >= k;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    pos.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pos[i];
    }
    int l = 0, r = pos[n - 1] - pos[0] + 10;
    while (l + 1 < r)
    {
        lli mid = (l + r) / 2;
        if (good(mid))
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
}
