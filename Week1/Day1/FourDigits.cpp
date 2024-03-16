#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sz=s.size();
    if(sz<4)
    {
        for(int i=0;i<4-sz;i++)
        cout<<'0';
    cout<<s<<"\n";
    }
    else cout<<s<<"\n";
}