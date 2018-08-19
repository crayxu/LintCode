class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: An integer denotes the middle number of the array
     */
    int median(vector<int> &nums) {
        // write your code here
        
        sort(nums.begin(), nums.end());
        
        int size = nums.size();
        
        return (size%2)==0 ? nums[size/2-1] : nums[size/2];
    }
};