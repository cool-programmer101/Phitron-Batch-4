#include <iostream>
using namespace std;
int solve()
{
    string s;
    cin >> s;
    char c = s[s.size() - 1];
    if (c == 'M')
        return 0;
    int t = s.size();
    return c == 'S' ? -t : +t;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int s = solve();
        int t = solve();
        cout << (s < t ? "<\n" : s > t ? ">\n": "=\n");
    }
}
