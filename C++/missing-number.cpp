class Solution {
public:
    /**
     * @param nums: An array of integers
     * @return: An integer
     */
    int findMissing(vector<int> &nums) {
        int size = nums.size();
    
        int ideal_sum = 0;
        
        int real_sum = 0;
        
        for (int i = 0; i <= size; i++) {
            ideal_sum += i;
        }
        
        for (int i = 0; i < size; i++) {
            real_sum += nums[i];
        }
        return ideal_sum - real_sum;
    }
};
