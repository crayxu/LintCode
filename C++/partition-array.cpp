class Solution {
public:
    /**
     * @param nums: The integer array you should partition
     * @param k: An integer
     * @return: The index after partition
     */
    int partitionArray(vector<int> &nums, int k) {
        
        int len = nums.size();
        int count = 0;
        if (len == 0) {
            return 0;
        } else {
            for (int i = 0; i < len; i++) {
                if (nums[i] < k) {
                    count++;
                }
            }
        }
        return count;
    }
};