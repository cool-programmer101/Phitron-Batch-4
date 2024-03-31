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
    ll n,ans=0;
    cin>>n;
    priority_queue<ll> pq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>0) 
        pq.push(x);
        else if(x==0 && pq.size()==0)
        continue;
        else
        {
            ans+=pq.top();
            pq.pop();
        }
    }
    cout<<ans<<endl;
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
