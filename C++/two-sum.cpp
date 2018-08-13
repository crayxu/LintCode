class Solution {
public:
    /**
     * @param numbers: An array of Integer
     * @param target: target = numbers[index1] + numbers[index2]
     * @return: [index1, index2] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &numbers, int target) {
        // write your code here
        vector<int> result;
        for (int i = 0; i < numbers.size(); i++) {
            for (int j = i+1; j < numbers.size(); j++) {
                if (numbers[i] + numbers[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};