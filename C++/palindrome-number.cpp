class Solution {
public:
    /**
     * @param num: a positive number
     * @return: true if it's a palindrome or false
     */
    bool isPalindrome(int num) {
        // write your code here
        string num_to_string = "";
        while (num > 0) {
            int remain = num % 10;
            if (remain == 1) {
                num_to_string += "1";
            } else if (remain == 2) {
                num_to_string += "2";
            } else if (remain == 3) {
                num_to_string += "3";
            } else if (remain == 4) {
                num_to_string += "4";
            } else if (remain == 5) {
                num_to_string += "5";
            } else if (remain == 6) {
                num_to_string += "6";
            } else if (remain == 7) {
                num_to_string += "7";
            } else if (remain == 8) {
                num_to_string += "8";
            } else if (remain == 9) {
                num_to_string += "9";
            } else {
                num_to_string += "0";
            }
            
            num /= 10;
        }
        
        string copy(num_to_string); // actually it is reversed when converted to string
        
        reverse(num_to_string.begin(), num_to_string.end());
        
        if (num_to_string.compare(copy) != 0) {
            return false;
        }
        return true;
        
    }
};
