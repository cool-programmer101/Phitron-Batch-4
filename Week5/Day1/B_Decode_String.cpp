#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        vector<char> s1;
        cin>>s;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                int x=s[i-1]-48;
                int y=s[i-2]-48;
                y=y*10+x;
                char c=y+96;
                s1.pb(c);
                i=i-2;
            }
            else
            {
                int z=s[i]-48;
                //s1+=z+96;
                char c=z+96;
                s1.pb(c);
            }
        }
        reverse(s1.begin(),s1.end());
        for(int i=0; i<s1.size(); i++) cout<<s1[i];
        cout<<endl;
    }
}