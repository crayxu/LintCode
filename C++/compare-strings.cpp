class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: if string A contains all of the characters in B return true else return false
     */
    bool compareStrings(string &A, string &B) {
        // write your code here
        int len_a = A.length();
        int len_b = B.length();
        
        // edge case
        if (len_a == 0 && len_b == 0) {
            return true;
        }
        if (len_a == 0 && len_b != 0) {
            return false;
        }
        if (len_a != 0 && len_b == 0) {
            return true;
        }
        
        bool exist;
        
        for (int i = 0; i < B.size(); i++) {
            exist = false;
            for (int j = 0; j < A.size(); j++) {
                if (B[i] == A[j]) {
                    A.erase (j,1);
                    exist = true;
                    break;
                }
            }
            if (exist) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }
};