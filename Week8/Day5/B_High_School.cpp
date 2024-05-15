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
    double x, y;
    cin >> x >> y;
    double a = y * log(x);
    double b = x * log(y);
    if (a == b)
    {
        cout << "=";
        cout<<"\n";
    }
    else if (a > b)
    {
        cout << ">";
        cout<<"\n";
    }
    else
    {
        cout << "<";
        cout<<"\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
