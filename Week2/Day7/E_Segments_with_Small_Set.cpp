#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007

typedef long long ll; 

ll count(int arr[], ll n, ll k) {
    unordered_map<ll, ll> freq;
    ll l = 0, r = 0;
    ll ans = 0;
    ll cnt = 0;

    while (r < n) {
        freq[arr[r]]++;
        if (freq[arr[r]] == 1) {
            cnt++;
        }
        while (cnt > k) {
            freq[arr[l]]--;
            if (freq[arr[l]] == 0) {
                cnt--;
            }
            l++;
        }

        ans += (r - l + 1);

        r++;
    }

    return ans;
}

int main() {
    ll n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll result = count(arr, n, k);
    cout << result << endl;

    return 0;
}
