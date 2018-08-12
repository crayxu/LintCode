class Solution {
public:
    /*
     * @param source: source string to be scanned.
     * @param target: target string containing the sequence of characters to match
     * @return: a index to the first occurrence of target in source, or -1  if target is not part of source.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        
        if (target == NULL || source == NULL) {
            return -1;
        }
        
        int target_size = strlen(target);
        int source_size = strlen(source);
        
        int last_position = source_size-target_size;
        
        int times = 0;
        
        bool got_it = true;
        
        for (int i = 0; i <= last_position; i++) {
            got_it = true;
            int target_position = 0;
            int source_position = i;
            times = target_size;
            while (times > 0) {
                if (target[target_position] == source[source_position]) {
                    target_position++;
                    source_position++;
                    times--;
                } else {
                    got_it = false;
                    break;
                }
            }
            if (!got_it) {
                continue;
            } else {
                return i;
            }
        }
        return -1;
    }
};