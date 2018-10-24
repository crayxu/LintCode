class Solution {
public:
    /*
     * @param str: A string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        int arr[128] = {0};
        
        for (int i = 0; i < str.length(); i++) {
            arr[str[i]]++;
        }
        for (int i = 0; i < 128; i++) {
            if (arr[i] > 1) {
                return false;
            }
        }
        return true;
    }
};
