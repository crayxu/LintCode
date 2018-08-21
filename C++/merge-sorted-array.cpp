class Solution {
public:
    /*
     * @param A: sorted integer array A which has m elements, but size of A is m+n
     * @param m: An integer
     * @param B: sorted integer array B which has n elements
     * @param n: An integer
     * @return: nothing
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        
        // from back
        int A_pos = m-1;
        int B_pos = n-1;
        
        int merge_pos = m+n-1;
        
        while (A_pos >= 0 && B_pos >= 0) {
            if (A[A_pos] >= B[B_pos]) {
                A[merge_pos] = A[A_pos];
                merge_pos--;
                A_pos--;
            } else {
                A[merge_pos] = B[B_pos];
                merge_pos--;
                B_pos--;
            }
        }
        
        if (A_pos >= 0) {
            while (A_pos >= 0) {
                A[merge_pos] = A[A_pos];
                merge_pos--;
                A_pos--;
            }
        } else {
            while (B_pos >= 0) {
                A[merge_pos] = B[B_pos];
                merge_pos--;
                B_pos--;
            }
        }
        
    }
};