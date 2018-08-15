class Solution {
public:
    /**
     * @param n: An integer
     * @return: the nth prime number as description.
     */
    
    int min_of_three(int a, int b, int c) {
        int two_of_min = 0;
        
        if (a < b) {
            two_of_min = a;
        } else {
            two_of_min = b;
        }
        if (two_of_min < c) {
            return two_of_min;
        } else {
            return c;
        }
        
    }
    
    int nthUglyNumber(int n) {
    
        vector<int> ugly_numbers;
        
        ugly_numbers.push_back(1);
        
        int index_2 = 0;
        int index_3 = 0;
        int index_5 = 0;
        
        int count = 1;
        
        while (count < n) {
            int min = 
            min_of_three(ugly_numbers[index_2]*2, ugly_numbers[index_3]*3, ugly_numbers[index_5]*5);
            
            if (min == ugly_numbers[index_2]*2) {
                index_2++;
            }
            if (min == ugly_numbers[index_3]*3) {
                index_3++;
            }
            if (min == ugly_numbers[index_5]*5) {
                index_5++;
            }
            
            ugly_numbers.push_back(min);
            
            count++;
        }
        
        
        return ugly_numbers[n-1];
      
    }
};