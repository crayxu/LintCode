class Solution {
public:
    /**
     * @param nums: An integer array
     * @return: nothing
     */
    void recoverRotatedSortedArray(vector<int> &nums) {
        // write your code here
        int min = *min_element(nums.begin(), nums.end());
        int size = nums.size();
        while (nums[0] != min) {
            int back = nums[0];
            for (int i = 1; i < size; i++) {
                nums[i-1] = nums[i];
            }
            nums[size-1] = back;
        }
    }
};