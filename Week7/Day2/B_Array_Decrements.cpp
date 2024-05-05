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
    cin>>n;
    vector<ll>a(n),b(n),c(n);
    ll df=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++)
    {
        /*if(n==1)
        {
            if(a[i]>b[i])
            {
            cout<<"YES\n";
            return;
            }
            else 
            {
            cout<<"NO\n";
            return;
            }
        }*/
        
        //c[i]=a[i]-b[i];
        df=max(df,a[i]-b[i]);
        
    }
    //cout<<c.size();
    //cout<<df;
    //for(int i=0;i<c.size();i++) cout<<c[i]<<" ";
    //cout<<"\n";
    bool flag=true;;
    for(int i=0;i<n;i++)
    {
        if(b[i]>a[i])
        {
            cout<<"NO\n";
            return;
        }
        else if((a[i]-b[i])!=df)
        {
            if(b[i]!=0) {
            flag=false;
            break;
            }
            else flag=true;
        }
        else flag=true;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
