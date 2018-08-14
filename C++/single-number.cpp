class Solution {
public:
    /**
     * @param A: An integer array
     * @return: An integer
     */
    int singleNumber(vector<int> &A) {
        // write your code here
        sort(A.begin(), A.end());
        
        if (A.size() == 1) {
            return A[0];
        }
        
        for (int i = 0; i < A.size(); i+=2) {
            
            if (i == A.size()-1) {
                return A[i];
            }
            
            if (A[i] != A[i+1]) {
                if (A[i+1] == A[i+2]) {
                    return A[i];
                } else {
                    return A[i+1];
                }
            }
        }
    }
};