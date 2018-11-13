class Solution {
public:
    /**
     * @param str: str: the given string
     * @return: char: the first unique character in a given string
     */
    char firstUniqChar(string &str) {
        // Write your code here
        char result;
        int len = str.length();
        int arr[256] = {0};
        for (int i = 0; i < len; i++) {
            arr[str[i]]++;
        }
        for (int i = 0; i < 256; i++) {
            if (arr[i] == 1) {
                result = i;
                return result;
            }
        }
    }
};
