class Solution {
public:
    /**
     * @param ipLines: ip  address
     * @return: return highestFrequency ip address
     */
    string highestFrequency(vector<string> &ipLines) {
        
        map<string, int> hash;
        int high = 0;
        for (string ip : ipLines) {
            hash[ip]++;
            high = max(high, hash[ip]);
        }
        
        for (auto it : hash) {
            if (it.second == high) {
                return it.first;
            }
        }
        
        return "";
    }
};
