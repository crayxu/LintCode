class Solution {
public:
    /*
     * @param nums: An ineger array
     * @return: An integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        int result = nums.size();
        
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != nums[i+1]) {
                nums[count] = nums[i];
                count++;
            }
        }
        
        nums.resize(count);
        
        return count;
    }
};