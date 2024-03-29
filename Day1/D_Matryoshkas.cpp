#include<bits/stdc++.h>
#include<map>
#define pb push_back
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<ll, ll>mp;
        vector<int>v;
        ll n,cnt=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
       // sort(a,a+n);
        for(auto it: mp)
        {
           // cout<<it.first<<"  ";
            //cout<<mp[it.first]<<" "<<mp[it.first-1]<<" ";
            if(mp[it.first-1]<mp[it.first])
                cnt+=(mp[it.first]-mp[it.first-1]);
        }
        cout<<cnt<<endl;
        //  cout<<endl;
        /*for(auto it: mp)
         cout<<mp[it.first]<<" "<<mp[it.first-1]<<" ";
        cout<<endl;
        /* for(auto it: mp)
        {
        cout<<it.second<<" ";
        }
        cout<<endl;*/
    }
}