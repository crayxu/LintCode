class Solution {
public:
    /**
     * @param A: An Integer array
     * @return: returns the maximum sum of two numbers
     */
    
    int digits_sum(int num) {
        int sum = 0;
        while(num > 0) {    
            int remainder = num % 10;    
            sum += remainder;    
            num /= 10;    
        }    
        return sum;
    }
    
    int MaximumSum(vector<int> &A) {
        map<int, vector<int>> hash;
        for (auto i : A) {
            hash[digits_sum(i)].emplace_back(i);
        }
        int max_sum = -1;
        for (map<int, vector<int>>::iterator it = hash.begin(); it != hash.end(); ++it) {
            vector<int> array = it->second;
            int size = array.size();
            if (size > 1) {
                for (int i = 0; i < size - 1; i++) {
                    for (int j = i + 1; j < size; j++) {
                        int sum = array[i] + array[j];
                        max_sum = sum > max_sum ? sum : max_sum;
                    }
                }
            }
        }
        return max_sum;
    }
};
