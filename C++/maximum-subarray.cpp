class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> &nums) {
        
        int size = nums.size();
        
        if (size == 1) {
            return nums[0];
        }
        
        int max_so_far = INT_MIN;
        int max_ending_here = 0;
        
        for (int i = 0; i < size; i++) {
            
            max_ending_here = max_ending_here + nums[i];
            
            if (max_so_far < max_ending_here) {
                max_so_far = max_ending_here;
            }
            
            if (max_ending_here < 0) {
                max_ending_here = 0;
            }
            
            
        }
        return max_so_far;
    }
};