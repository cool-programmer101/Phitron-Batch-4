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
    int a[1000000] = {0};
    for (int i = 2; i <= 1000000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; i * j <= 1000000; j++)
            {
                a[i * j] = 1;
            }
        }
    }
    int x;
    cin >> x;
    long long int b;
    long long int sq;
    for (int i = 0; i < x; i++)
    {
        cin >> b;
        sq = sqrt(b);
        if (b == 1)
            cout << "NO" << endl;
        else if ((sq * sq == b) && (a[sq] == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;

    solve();

    return 0;
}
