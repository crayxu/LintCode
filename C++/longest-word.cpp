class Solution {
public:
    /*
     * @param dictionary: an array of strings
     * @return: an arraylist of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        int max_len = 0;
        int dic_len = dictionary.size();
        vector<string> res = {};
        
        for (int i = 0; i < dic_len; i++) {
            cout << i << endl;
            int cur_len = dictionary[i].size();
            if (cur_len < max_len) {
                continue;
            } else if (cur_len == max_len) {
                res.push_back(dictionary[i]);
            } else {
                res.clear();
                res.push_back(dictionary[i]);
                max_len = cur_len;
                cout << max_len << endl;
            }
        }
        return res;
    }
};
