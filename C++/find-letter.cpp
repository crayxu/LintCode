class Solution {
public:
    /**
     * @param str: the str
     * @return: the letter
     */
    char findLetter(string &str) {
        std::size_t found_upper_case;
        std::size_t found_lower_case;
        for (char c = 'Z'; c >= 'A'; c--) {
            found_upper_case = str.find(c);
            found_lower_case = str.find(c+32);
            if (found_upper_case != std::string::npos && found_lower_case != std::string::npos) {
                return c;
            }
        }
        return '~';
    }
};
