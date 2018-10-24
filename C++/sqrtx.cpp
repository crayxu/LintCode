class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        if (x == 0) {
            return 0;
        } else {
            long start = 1;
            long end = x;
            long mid;
            while (start+1 < end) {
                mid = start + (end-start)/2;
                if (mid * mid > x) {
                    end = mid;
                } else {
                    start = mid;
                }
            }
            if (end * end <= x) {
                return (int) end;
            } else {
                return (int) start;
            }
        }
    }
};
