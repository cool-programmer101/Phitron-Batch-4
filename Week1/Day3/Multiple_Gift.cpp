#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x,y;
    cin>>x>>y;
    ll cnt=0;
    //int i=x;
    while(x<=y)
    {
            x*=2;
            cnt++;
    }
    cout<<cnt<<endl;
}