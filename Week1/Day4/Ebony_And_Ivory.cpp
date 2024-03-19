#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    for(int i=0;i<=10000;i++)
    {
        for(int j=0;j<=10000;j++)
        {
            if(a*i+b*j==c)
            {
                flag=true;
                break;
            }
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    //ll test;
    //cin>>test;
    //while(test--)
    //{
        solve();
    //}
    return 0;
}
//Alternative Solution
/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
  
    for(int i=c;i>=0;i-=a)
    {
        if(i%a==0 || i%b==0)
        {
            flag=true;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
        solve();
    return 0;
}
*/