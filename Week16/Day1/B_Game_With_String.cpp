#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define sort(a) sort(a.begin(),a.end());
#define srt(b) sort(b.begin(),b.end(),greater<int>());
#define mod 1000000007

void solve() {
    string s;
    cin >> s;
    ll cnt = 0;
    stack<char> st;
    
    for(char c : s) 
    {
        if(!st.empty() && st.top() == c) 
        {
            st.pop();
            cnt++;
        } 
        else
        {
            st.push(c);
        }
    }

    if(cnt % 2 == 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
