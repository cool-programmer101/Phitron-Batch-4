#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int ans=0;
    int j=2;
    for(int i=a;i<=t; )
    {
        ans+=b;
        if(i>t) break;
        else
        {
            i=a*j;
            j++;
        }
    }
   cout<<ans<<endl;
}