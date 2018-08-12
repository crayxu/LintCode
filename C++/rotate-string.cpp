class Solution {
public:
    /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
        // write your code here
        int len = str.length();
        if (len == 0) { // edge case
            return;
        }
        int cycle = offset % len; // aviod repetition
        while (cycle > 0) {
            char last = str[len-1];
            for (int i = len-1; i > 0; i--) {
                str[i] = str[i-1];
            }
            str[0] = last;
            cycle--;
        }
    }
};