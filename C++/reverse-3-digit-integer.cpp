class Solution {
public:
    /**
     * @param number: A 3-digit number.
     * @return: Reversed number.
     */
    int reverseInteger(int number) {
        // write your code here
        int result = 0;
        while(number != 0) {
            result *= 10;
            result += number%10;
            number /= 10;
        }
        return result;
    }
};