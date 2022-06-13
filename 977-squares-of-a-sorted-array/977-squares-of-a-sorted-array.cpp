
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        /**
        * This naive approach is O(nlogn) due to sorting
        **/
//         vector<int> squared;
//         for (auto& num : nums) {
//             squared.push_back(num*num);
//         }
        
//         std::sort(squared.begin(), squared.end());
        
//         return squared;
        
        
        
        /**
        * This approach is O(n)
        **/
        
        // two pointer
        // one at front, one at end. we will take the abs. value of each and push the one with the bigger                square to the end of the resulting array and adjust pointers when needed.
        vector<int> squared;
        int l = 0;
        int r = nums.size() - 1;
        
        if (nums.size() == 0) return squared;
        
        while (l < r) {
            
            // if left has bigger abs. value, we push its square to result
            if (abs(nums[l]) > abs(nums[r])) {
                squared.insert(squared.begin(), nums[l] * nums[l]); // vector has no 'push_front' 
                l++;
            }
            
            // if right has bigger (or equal) abs, we push its square to result
            else if (abs(nums[l]) <= abs(nums[r])) {
                squared.insert(squared.begin(), nums[r] * nums[r]);
                r--;
            }
            
        }

        // when l == r (aka size of nums is 1)
        // also the while-loop does not handle this case, so we do it here
        squared.insert(squared.begin(), nums[l] * nums[l]);
        
        return squared;
    }
};