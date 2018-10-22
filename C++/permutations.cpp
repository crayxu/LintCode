class Solution {
public:
    /*
     * @param nums: A list of integers.
     * @return: A list of permutations.
     */
    vector<vector<int>> permute(vector<int> nums) {
        if (nums.empty()) {
            return {{}};
        }
        vector<vector<int>> result;
        vector<bool> used(nums.size(), false);
        vector<int> ans;

        sort(nums.begin(), nums.end());
        permuteHelper(nums, &used, &ans, &result);
        return result;
    }

    void permuteHelper(const vector<int> A, vector<bool>* used,
                       vector<int>* ans, vector<vector<int>>* result) {
        if (ans->size() == A.size()) {
            result->emplace_back(*ans);
            return;
        }

        for (int i = 0; i < A.size(); i++) {
            if ((*used)[i]) {
                continue;
            }
            (*used)[i] = true;
            ans->emplace_back(A[i]);
            permuteHelper(A, used, ans, result);
            ans->pop_back();
            (*used)[i] = false;
        }
    }
};