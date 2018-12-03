class Solution {
public:
    /**
     * @param s: The first string
     * @param t: The second string
     * @return: true or false
     */
    bool anagram(string &s, string &t) {
        vector<int> charcount(26, 0);
        int len_s = s.length();
        int len_t = t.length();
        
        
        for (int i = 0; i < len_s; i++) {
            charcount[s[i]-'a']++; 
        }
        for(int i =0; i< t.length(); i++) {  
            charcount[t[i] - 'a']--;  
        }
        for (int i = 0; i < 26; i++) {  
           if (charcount[i] != 0) {  
               return false;  
           }  
        }
        return true;
    }
};
