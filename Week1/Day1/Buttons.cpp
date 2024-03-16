#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b) cout<<a+b<<"\n";
    else cout<<max(a,b)+max(a,b)-1<<"\n";
}