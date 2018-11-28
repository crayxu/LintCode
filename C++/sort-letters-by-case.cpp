class Solution {
public:
    /*
     * @param chars: The letter array you should sort by Case
     * @return: nothing
     */
     
    bool isLower(char c) {
        return c >= 'a' && c <= 'z';
    }
    
    void sortLetters(string &chars) {
        int i = 0;
        int j = chars.length() - 1;
        while (i <= j) {
            while (i <= j && isLower(chars[i])) i++;
            while (i <= j && !isLower(chars[j])) j--;
            if (i <= j) {
                char temp = chars[i];
                chars[i] = chars[j];
                chars[j] = temp;
            }
        }
    }
};
