#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n-1;
        ll a[n][x];
        for(int i=0; i<n; i++)
            for(int j=0; j<x; j++)
                cin>>a[i][j];

        int xx=a[0][0];
        if(xx!=a[1][0])xx=a[2][0];
        cout<<xx<<" ";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<x; j++)
                if(a[i][0]!=xx)cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}