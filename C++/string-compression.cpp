class Solution {
public:
    /**
     * @param originalString: a string
     * @return: a compressed string
     */
    string compress(string &originalString) {
        
        int len = originalString.length();
        
        // edge case
        if (len == 0) {
            return "";
        }
        
        string result = "";
        char temp = originalString[0];
        int count = 1;
        
        for (int i = 1; i < len; i++) {
            if (originalString[i] == temp) {
                count++;
            } else {
                temp = originalString[i];
                result += originalString[i-1];
                result += to_string(count);
                count = 1;
            }
            
        }
        result += originalString[len-1];
        result += to_string(count);
        
        int len_result = result.length();
        
        if (len_result < len) {
            return result;
        }
        return originalString;
       
    }
};
