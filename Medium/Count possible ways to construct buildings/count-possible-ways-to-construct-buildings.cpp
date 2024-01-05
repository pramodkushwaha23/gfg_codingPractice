//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	int  mod = (int)1e9+7;
    public: int TotalWays(int N)
    {
        // Code here
        long prev = 1;
        long curr = 1;
        int i = 2;
        while (i <= N) 
        {
            long temp = (prev + curr) % mod;
            prev = curr;
            curr = temp;
            i++;
        }
        
        curr += prev;
        long ans = (curr * curr) % mod;
        return (int)ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends