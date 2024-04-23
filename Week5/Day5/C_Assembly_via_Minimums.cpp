#include<bits/stdc++.h>
#include<map>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll m=(n*(n-1))/2;
        int a[m];
        for(int i=0; i<m; i++)
            cin>>a[i];
        sort(a,a+m);
        ll s=n;
        for(int i=0; i<m; i+=s)
        {
            cout<<a[i]<<" ";
            s--;
        }
        cout<<"1000000000\n";
    }
}