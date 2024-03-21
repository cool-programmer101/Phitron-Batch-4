//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
    int ans = 0;
    int fre[26] = {0};
    int freq[26] = {0};

    for (int i = 0; i < pat.length(); i++)
    {
        fre[pat[i]-'a']++;
    }

    for (int i = 0; i < txt.length(); i++)
    {
        freq[txt[i]-'a']++;
        if (i >= pat.length())
        {
            freq[txt[i-pat.length()]-'a']--;
        }
        bool flag = true;
        for (int j = 0; j < 26; j++)
        {
            if (freq[j] != fre[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans++;
        }
    }
    return ans;

	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends