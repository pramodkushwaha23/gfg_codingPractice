#User function Template for python3
class Solution:
    def bs(self,arr,divSum):
        ndiv,cs=1,0
        for a in arr:
            if cs+a<=divSum: cs+=a
            else:
                ndiv+=1
                cs=a
        return ndiv
    def splitArray(self, arr, N, K):
        # code here 
        l,r=max(arr),sum(arr)
        while l<=r:
            mid=(l+r)//2
            curr=self.bs(arr,mid)
            if curr>K: l=mid+1
            else: r=mid-1
        return l


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,K=map(int,input().split())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.splitArray(arr,N,K))
# } Driver Code Ends