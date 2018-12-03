class Solution {
public:
    /*
     * @param A: A list of integers
     * @param elem: An integer
     * @return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        int size = A.size();
        int res = 0;
        for (int i = 0; i < size; i++) {
            if (A[i] != elem) {
                A[res] = A[i];
                res++;
                
            }
        }
        return res;
    }
};
