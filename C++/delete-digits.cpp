class Solution {
public:
    /**
     * @param A: A positive integer which has N digits, A is a string
     * @param k: Remove k digits
     * @return: A string
     */
     
    string remove(string A, int pos) {
        return A.substr(0, pos) + A.substr(pos + 1, A.length() - pos - 1);
    }
    
    string DeleteDigits(string &A, int k) {
        if (A.length() == k) {
            return "";
        }
        
        while (k > 0) {
            for (int j = 0; j < A.length(); j++) {
                if (j == A.length() - 1 || A[j + 1] < A[j]) {
                    A = remove(A, j);
                    break;
                }
            }
            k--;
        }
        
        int index = 0;
        while (index < A.length() - 1 && A[index] == '0') {
            index++;
        }
        return A.substr(index, A.length() - index);
    }
};
