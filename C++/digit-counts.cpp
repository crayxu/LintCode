class Solution {
public:
    /**
     * @param k: An integer
     * @param n: An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        // write your code here
    
        if (k == 0) { // case 1 --> k == 0
            int result = 1; // initialize result as 1 because the series begin as 0
            while (n >= 0) {
                int copy = n;
                while (copy > 0) {
                    if (copy%10 == 0) {
                        result++;
                    }
                    copy /= 10;
                }
                n--;
            }
            return result;
        } else { // case 2 --> k != 0
            int result = 0;
            while (n >= 0) {
                int copy = n;
                while (copy > 0) {
                    if (copy%10 == k) {
                        result++;
                    }
                    copy /= 10;
                }
                n--;
            }
            return result;
        }
    }
};