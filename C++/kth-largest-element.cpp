class Solution {
public:
    /*
     * @param n: An integer
     * @param nums: An array
     * @return: the Kth largest element
     */
    int kthLargestElement(int n, vector<int> &nums) {
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        return nums[n-1];
        
    }
};