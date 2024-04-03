#include <bits/stdc++.h>
using namespace std;
int t, n, q, s, x, y;
int main()
{
    cin >> t;
    while (t--)
    {
        map<int, int> l, r;
        scanf("%d %d", &n, &q);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &s);
            if (!l[s])
                l[s] = i;
            r[s] = i;
        }
        for (int i = 1; i <= q; i++)
        {
            scanf("%d %d", &x, &y);
            if (l[x] == 0 || l[y] == 0 || r[y] < l[x])
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    return 0;
}
