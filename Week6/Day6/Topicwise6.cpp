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

int k, n;
vector<int> a;

bool good(lli sum)
{
    int seg = 1;
    lli temp = 0;
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > sum)
        {
            flag = 0;
            break;
        }
        if (temp + a[i] <= sum)
        {
            temp += a[i];
        }
        else
        {
            temp = a[i];
            seg++;
        }
    }
    if (flag == 1)
    {
        return seg <= k;
    }
    else
    {
        return 0;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    a.resize(n);
    long long int suma = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        suma += a[i];
    }
    long long int l = 0, r = suma + 100;
    while (l + 1 < r)
    {
        lli mid = (l + r) / 2;
        if (good(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << "\n";
    return 0;
}
