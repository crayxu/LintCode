class Solution {
public:
    /**
     * @param A: An integer
     * @return: a float number
     */
    float maxOfArray(vector<float> &A) {
        float max = A[0];
        
        int size = A.size();
        
        if (size == 1) {
            return max;
        }
        
        for (int i = 1; i < size; i++) {
            if (A[i] > max) {
                max = A[i];
            }
        }
        return max;
    }
};
