#include<bits/stdc++.h>
using namespace std;
void meow()
{
    int n;
    cin>>n;
    string s,s2;
    cin>>s;
    string s1="meow";
    for(int i=0; i<s.size(); i++)
    {
        if(tolower(s[i])!=tolower(s[i+1]))
            s2+=tolower(s[i]);
    }
    if(s2==s1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        meow();
    }
}