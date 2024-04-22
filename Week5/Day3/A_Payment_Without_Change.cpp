#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,S,verdict=0;
        cin>>a>>b>>n>>S;
        int x=min(S/n,a);
        if(x*n+b>=S)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
/*
4
1 2 3 4
1 2 3 6
5 2 6 27
3 3 5 18
*/