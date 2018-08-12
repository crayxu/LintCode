class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target to find.
     * @return: The first position of target. Position starts from 0.
     */
    int binarySearch(vector<int> &nums, int target) {
        // write your code here
        int size = nums.size();
        int left = 0;
        int right = size-1;
        int mid = 0;
        int result = -1;
        
        // first and last for beginning
        if (nums[0] == target) {
            return 0;
        }
        if (nums[right] == target) {
            return right;
        }
        
        while (left < right) {
            mid = (right-left)/2+left; // log(n)
            if (nums[mid] == target) {
                result = mid;
                right = mid-1;
                continue;
            }
            if (nums[mid] > target) {
                right = mid-1;
                continue;
            }
            if (nums[mid] < target) {
                left = mid+1;
                continue;
            }
        }
        
        // last check
        if (nums[left] == target) {
            return left;
        }
        if (nums[right] == target) {
            return right;
        }
        return result;
    }
};