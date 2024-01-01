#User function Template for python3

class Solution:
    def canPair(self, nums, k):
        n = len(nums)
        if n % 2 == 1:
            return False
        s = set()
        for i in range(n):
            if (k - nums[i]) % k in s:  
                s.remove((k - nums[i]) % k)
            else:
                s.add(nums[i] % k)
        return False if s else True


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n, k = input().split()
		n = int(n)
		k = int(k)
		nums = list(map(int, input().split()))
		ob = Solution()
		ans = ob.canPair(nums, k)
		if(ans):
			print("True")
		else:
			print("False")
# } Driver Code Ends