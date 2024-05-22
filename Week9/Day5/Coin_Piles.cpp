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
    ll a,b;
    cin>>a>>b;
    if((a+b)%3==0)
    {
        if(min(a,b)*2>=max(a,b))
        {
            cout<<"YES\n";
            return;
        }
        else 
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
