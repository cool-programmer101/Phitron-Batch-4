#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
int n, a[2000007];
 
bool check(int v) {
	int l = 1, r= n;
	while(l <= r) {
		if(a[l] == a[r]) l++, r --;
		else if(a[l] == v) l++;
		else if(a[r] == v) r--;
		else return 0;
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int l = 1, r= n;
		while(a[l] == a[r]) l++ , r--;
		if(l >= r or check(a[l]) or check(a[r])) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
   	 			 			 		 		 	   	  		