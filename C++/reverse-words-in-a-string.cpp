class Solution {
public:
    /*
     * @param s: A string
     * @return: A string
     */
    string reverseWords(string &s) {
        // write your code here
    
        string ss;
        int len = s.length()-1;
        
        while (len >= 0) {
            
            // reduce multiple spaces
            while (len >= 0 && s[len] == ' ') {
                len--;
            }
            
            if (len < 0) {
                break;
            }
            
            if (ss.length() != 0) {
                ss.push_back(' ');
            }
            
            string temp;
            
            for (; len >= 0 && s[len] !=' '; len--) {
                temp.push_back(s[len]);
            }
            
            reverse(temp.begin(),temp.end());
            
            ss.append(temp);
        }
        
        return ss;
    }
};