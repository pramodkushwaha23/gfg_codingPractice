//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	 const ll MOD=1e9+7;
    ll countStrings(int N) {
        ll dp[N + 1][2];
        dp[1][0] = 1;
        dp[1][1] = 1;
        for (int i = 2; i <= N; ++i) {
            dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % MOD;
            dp[i][1] = dp[i - 1][0];
        }
        ll result = (dp[N][0] + dp[N][1]) % MOD;
        return result;
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends