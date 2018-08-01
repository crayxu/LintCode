class Solution {
public:
    /**
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        vector<int> result;
        for (int i = 0; i < A.size(); i++) {
            result.push_back(A[i]);
        }
        for (int i = 0; i < B.size(); i++) {
            result.push_back(B[i]);
        }
        sort(result.begin(), result.end());
        return result;
    }
};
