class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        n = len(s)
        dp = [False] * (n+1)
        dp[-1] = True

        for i in range(n-1, -1, -1):
            for word in wordDict:
                m = len(word)
                if i+m <= n and s[i:i+m] in wordDict and dp[i+m]:
                    dp[i]=True
                    break
                    
        return dp[0]
        
        
        