#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
const ll maximo = 100000000000000ll;
void solve()
{
    string cad;
    ll money;

    cin >> cad;

    vector<ll> need(3);
    vector<ll> have(3);
    vector<ll> cost(3);

    for (int i = 0; i < cad.size(); ++i)
    {
        if (cad[i] == 'B')
            need[0]++;

        if (cad[i] == 'S')
            need[1]++;

        if (cad[i] == 'C')
            need[2]++;
    }

    for (int i = 0; i < 3; ++i)
        cin >> have[i];

    for (int i = 0; i < 3; ++i)
        cin >> cost[i];

    cin >> money;

    ll minBurger = 0, maxBurger = maximo, middle, din = 0ll, ans = 0ll, aux = 0;

    while (minBurger <= maxBurger)
    {

        din = 0ll;

        middle = (minBurger + maxBurger) / 2ll;

        for (int i = 0; i < 3; ++i)
        {
            aux = need[i] * middle;
            aux = have[i] - aux;

            if (aux < 0)
                din += abs(aux) * cost[i];
        }

        if (din <= money)
        {

            ans = middle;
            minBurger = middle + 1ll;
        }
        else
        {
            maxBurger = middle - 1ll;
        }
    }

    cout << ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test;
    // cin>>test;
    // while(test--)
    //{
    solve();
    //}
    return 0;
}
