class Solution {
public:
    /**
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
        int first = 0;
        int second = 1;
        
        int next;
        
        if (n == 1) {
            return first;
        }
        
        if (n == 2) {
            return second;
        }
        
        while (n > 2) {
            
            next = first+second;
            first = second;
            second = next;
            
            n--;
        }
        return next;
    }
};