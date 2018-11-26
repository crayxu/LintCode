class Solution {
public:
    /**
     * @param s: A string
     * @return: the length of last word
     */
    int lengthOfLastWord(string &s) {
        
        int count = 0;
        int len = s.length();
        bool update = false;
        
        for (int i = 0; i < len; i++) {
            if (s[i] != ' ' && update) {
                update = false;
                count = 1;
            } else if (s[i] != ' ' && !update) {
                count++;
            } else {
                update = true;
            }
        }
        return count;
        
    }
};
