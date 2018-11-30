class Solution {
public:
    /**
     * @param str: A string
     * @return: A string
     */
    string lowercaseToUppercase2(string &str) {
        string res = "";
        
        int len = str.length();
        
        for (int i = 0; i < len; i++) {
            char c = str[i];
            if (c >= 'a' && c <= 'z') {
                res += c - 'a' + 'A';
            } else {
                res += c;
            }
        }
        
        return res;
    }
};
