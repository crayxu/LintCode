class Solution {
public:
    /**
     * @param numbers: Give an array numbers of n integer
     * @return: Find all unique triplets in the array which gives the sum of zero.
     */
    
    vector<vector<int>> threeSum(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        
        for (int i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            if(nums[i] > 0) break;
            
            int lower = i+1;
            int upper = nums.size()-1;
            
            while (upper > lower) {
                if(nums[i] + nums[lower] + nums[upper] > 0){
                    upper--;
                } else if(nums[i] + nums[lower] + nums[upper] < 0){
                    lower++;
                } else {
                    vector<int> temp({nums[i], nums[lower], nums[upper]});
                    res.push_back(temp);
                    lower++;
                    while (lower < nums.size()  && (nums[lower] + nums[upper] + nums[i]) == 0) {
                        lower++;
                    }
                }
                
                
            }
        }
        return res;
    }
};
