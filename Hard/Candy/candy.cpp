//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {int prev=1;
        int ans=1;int i=1;
        while(i<N){
            if(ratings[i]>ratings[i-1]){
                int temp=prev+1;
                ans+=(prev+1);
                prev=temp;
                i++;
            }
            else if(ratings[i]<ratings[i-1]){
                int j=i+1;int count=1;
                while(j<N&&ratings[j]<ratings[j-1]) {j++;count++;}
                ans+=((count*(count+1))/2);
                ans-=prev;
                ans+=max(prev,count+1);
                prev=1;
                i=j;
            }
            else{
                ans++;prev=1;i++;
            }
        }
        return ans;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends