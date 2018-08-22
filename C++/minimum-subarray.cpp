class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: A integer indicate the sum of minimum subarray
     */
    int minSubArray(vector<int> &nums) {
        
        // min value up to the current index
        int min_ending_here = INT_MAX;
     
        // min value
        int min_so_far = INT_MAX;
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (min_ending_here > 0) {
                min_ending_here = nums[i];
            } else {
                min_ending_here += nums[i];
            }
            
            min_so_far = min(min_so_far, min_ending_here);  
        }
        
        return min_so_far;
    }
};