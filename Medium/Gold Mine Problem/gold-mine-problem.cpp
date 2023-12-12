//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        vector<int> pre(n,0);
        for(int j=m-1;j>=0;j--)
        {
            vector<int> curr(n,0);
            for(int i=0;i<n;i++)
            {
                int a,b,c;
                a=b=c=M[i][j];
                
                if(i-1>=0 and j+1<m)
                a+=pre[i-1];
                
                if(i+1<n and j+1<m)
                b+=pre[i+1];
                
                if(j+1<m)
                c+=pre[i];
                
                curr[i]=max({a,b,c});
            }
            pre=curr;
        }
        
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(pre[i],maxi);
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends