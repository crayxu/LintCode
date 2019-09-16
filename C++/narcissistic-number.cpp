class Solution {
public:
    /**
     * @param n: The number of digits
     * @return: All narcissistic numbers with n digits
     */
    
    int countDigit(int n) { 
        if (n == 0) {
            return 0;
        }
        return 1 + countDigit(n/10);
    }  
    bool check(int n) { 
        // count the number of digits 
        int length = countDigit(n); 
        int dup = n; 
        int sum = 0;
        
        // calculates the sum of digits 
        // raised to power 
        while (dup > 0) { 
            sum += pow(dup % 10, length); 
            dup /= 10; 
        } 
        return (n == sum);
    }
    vector<int> getNarcissisticNumbers(int n) {
        vector<int> result;
        
        if (n == 1) {
            for (int i = 0; i < 10; i++) {
                if (check(i)) {
                    result.push_back(i);
                }
            }
        }
        if (n == 2) {
            for (int i = 10; i < 100; i++) {
                if (check(i)) {
                    result.push_back(i);
                }
            }
        }
        if (n == 3) {
            for (int i = 100; i < 1000; i++) {
                if (check(i)) {
                    result.push_back(i);
                }
            }
        }
        if (n == 4) {
            for (int i = 1000; i < 10000; i++) {
                if (check(i)) {
                    result.push_back(i);
                }
            }
        }
                if (n == 5) {
            for (int i = 10000; i < 100000; i++) {
                if (check(i)) {
                    result.push_back(i);
                }
            }
        }
                if (n == 6) {
            for (int i = 100000; i < 1000000; i++) {
                if (check(i)) {
                    result.push_back(i);
                }
            }
        }
                if (n == 7) {
            for (int i = 1000000; i < 10000000; i++) {
                if (check(i)) {
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};
