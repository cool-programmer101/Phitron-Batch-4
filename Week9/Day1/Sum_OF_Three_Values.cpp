#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x;
    cin>>n>>x;
   vector<pair<int, int>> arr;

	for (int i = 1; i <= n; i++) 
    {
		int a;
		cin >> a;
		pair<int, int> p;
		p.first = a;
		p.second = i;
        arr.push_back(p);
	}
    sort(begin(arr), end(arr));
	for (int i = 0; i < n; i++)
     {
		int l, r;
		l = 0;
		r = n - 1;
		while (l != r) 
        {
			int target;
			target = x - arr.at(i).first;
			if (l != i && r != i &&
			    arr.at(l).first + arr.at(r).first == target) 
                {
				cout << arr.at(i).second << " " << arr.at(l).second << " "<< arr.at(r).second << endl;
				return 0;
			}
			if (arr.at(l).first + arr.at(r).first < target) 
            {
				l++;
			} 
            else
            {
				r--;
			}
		}
	}
	cout << "IMPOSSIBLE" << endl;
}