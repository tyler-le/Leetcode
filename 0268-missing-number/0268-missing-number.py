class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        visited = set(nums)
        
        for i in range(n+1):
            if i not in visited:
                return i
            
            
        