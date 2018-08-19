class Solution {
public:
    /**
     * @param A: an integer sorted array
     * @param target: an integer to be inserted
     * @return: An integer
     */
    int searchInsert(vector<int> &A, int target) {
        // write your code here
        int size = A.size();
        
        if (size == 0) {
            return 0;
        }
        for (int i = 0; i < size; i++) {
            if (A[i] == target) {
                return i;
            }
        }
        
        
        if (target < A[0]) {
            return 0;   
        }
        if (target > A[size-1]) {
            return size;
        }
        for (int i = 1; i < size-1; i++) {
            if (target > A[i-1] && target < A[i]) {
                return i;
            }
        }
    }
};