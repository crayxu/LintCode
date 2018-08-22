class Solution {
public:
    /**
     * @param nums: An integer array
     * @return: The second max number in the array.
     */
    int secondMax(vector<int> &nums) {
        // write your code here
        
        sort(nums.begin(), nums.end());
        
        return nums[nums.size()-2];
    }
};