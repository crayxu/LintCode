class Solution {
public:
    /*
     * @param nums: a list of integers
     * @return: find a  majority number
     */
    int majorityNumber(vector<int> &nums) {
        
        int size = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int count = 1;
        for (int i = 0; i < size-1; i++) {
            if (nums[i] != nums[i+1]) {
                count = 1;
            }
            count++;
            
            if (count > size/2) {
                return nums[i];
            }
        }
        
    }
};