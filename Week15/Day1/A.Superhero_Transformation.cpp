#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define sort(a) sort(a.begin(), a.end());
#define srt(b) sort(b.begin(), b.end(), greater<int>());
#define mod 1000000007

void solve() 
{
    string s, t;
    cin >> s >> t;
    if (s.size() != t.size())
    {
        cout << "NO\n";
        return;
    }
    set<char> v = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < s.size(); i++)
    {
        if ((v.count(s[i]) && !v.count(t[i])) || (!v.count(s[i]) && v.count(t[i])))
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}