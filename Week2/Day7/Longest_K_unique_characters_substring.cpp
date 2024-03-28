//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        vector<int> freq(26, 0);
        int l=0, r= 0, n = s.size(), a = 0,c = 0;

        for (r= 0; r< n; r++) {
            int index = s[r]-'a';
            if (freq[index]==0) {
               c++;
            }
            ++freq[index]; 
            while (c> k) {
                int idx = s[l]-'a';
                if (--freq[idx] == 0) {
                    c--;
                }
                l++; 
            }
           a= max(a,r-l+1);
        }
        if (c!= k) {
            return -1;
        }
        return a;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends