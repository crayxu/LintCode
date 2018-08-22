class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
     
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    void sortIntegers(vector<int> &A) {
        
        int size = A.size();
        
        int i,j;
        int min_index;
        
        for (i = 0; i < size-1; i++) {
            min_index = i;
            for (j = i+1; j < size; j++) {
                if (A[j] < A[min_index]) {
                    min_index = j;
                }
            }
            swap(A[i], A[min_index]);
        }
    }
};