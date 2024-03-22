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
    ll k,s;
    cin>>k>>s;
    ll c=0,cnt=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(s-(i+j)==c && c<k)
            cnt++;
        }
        c++;
    }
    cout<<cnt<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //ll test;
    //cin>>test;
    //while(test--)
    //{
        solve();
    //}
    return 0;
}
