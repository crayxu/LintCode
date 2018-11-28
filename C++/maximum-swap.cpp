class Solution {
public:
    /**
     * @param num: a non-negative intege
     * @return: the maximum valued number
     */
     
    int maximumSwap(int num) {
        string num_str = to_string(num);
        // cout << "convert to string: " << num_str << endl;
        int len = num_str.length();
        // cout << "length of string: " << len << endl;
        for (int i = 0; i < len; i++) {
            if (num_str[i] == '9') {
                continue;
            }
            // get number
            int single_num = num_str[i] - '0';
            // cout << single_num << " should be replaced" << endl;
            // start to find
            int j;
            int find_next = 9;
            while (find_next > single_num) {
                // cout << "I want to find " << find_next << endl;
                char find_next_char = '0' + find_next;
                // cout << "I want to find(char) " << find_next_char << endl;
                for(j = len-1; j > i; j--) {
                    // cout << "next is " << num_str[j] << endl;
                    if (find_next_char == num_str[j]) {
                        char temp = num_str[i];
                        num_str[i] = num_str[j];
                        num_str[j] = temp;
                        return stoi(num_str);
                    }
                }
                find_next--;
            }
        }
        return num;
    }
};
