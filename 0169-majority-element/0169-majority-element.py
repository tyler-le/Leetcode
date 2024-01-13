class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        counts = defaultdict(int)
        n = len(nums)
        for num in nums:
            counts[num]+=1
            if counts[num] >= ceil(n / 2):
                return num
            