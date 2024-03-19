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
    int n;
    cin>>n;
    string s[3*n+1];
    map<string ,int> mp;
    for(int i=1;i<=n*3;i++)
    {
        cin>>s[i];
        mp[s[i]]++;
    }
    int cnt=0;
    for(int i=1;i<=n*3;i++)
    {
        if(mp[s[i]]==1) cnt+=3;
        else if(mp[s[i]]==2) cnt+=1;
        
        if(i%n==0)
        {
        cout<<cnt<<" ";
        cnt=0;
        }
    }
    cout<<"\n";
        
}
int main() {
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
