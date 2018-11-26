class Solution {
public:
    /**
     * @param nums: An integer array sorted in ascending order
     * @param target: An integer
     * @return: An integer
     */
    int findPosition(vector<int> &nums, int target) {
        
        int size = nums.size();
        int start = 0;
        int end = size-1;
        int mid = (start+end) / 2;
        
        // edge case
        if (size == 0) {
            return -1;
        }
        if (size == 1) {
            if (nums[0] == target) {
                return 0;
            }
            return -1;
        }
        while (true) {
            if (nums[start] == target) {
                return start;
            }
            if (nums[end] == target) {
                return end;
            }
            if (start+1 == end) {
                return -1;
            }
            if (nums[mid] > target) {
                end = mid;
                mid = (start+end) / 2;
            } else if (nums[mid] < target) {
                start = mid;
                mid = (start+end) / 2;
            } else {
                return mid;
            }
        }
    }
};
