class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        
        int size = nums.size();
        
        if (size == 0) {
            return 0;
        }
        
        int prev = nums[0];
        
        bool exist_twice = false;
        
        int pos = 1;
        
        while (pos < nums.size()) {
            
            if (nums[pos] == prev && exist_twice == false) {
                cout << "i am in 1" << endl;
                pos++;
                exist_twice = true;
                continue;
            }
            
            if (nums[pos] == prev && exist_twice == true) {
                cout << "i am in 2" << endl;
                nums.erase(nums.begin()+pos);
                size--;
                continue;
            }
            
            if (nums[pos] != prev) {
                cout << "i am in 3" << endl;
                prev = nums[pos];
                pos++;
                exist_twice = false;
                continue;
            }
        }
        return size;
        
    }
};