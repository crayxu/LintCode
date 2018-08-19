/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: Sorted interval list.
     * @param newInterval: new interval.
     * @return: A new interval list.
     */
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        // write your code here
        vector<Interval> result;
        bool is_insert = false;
        for(int i = 0; i < intervals.size(); i++) {
            // already insert newInterval
            if (is_insert) {  
                result.push_back(intervals[i]);
                continue;
            }
            
            // before current interval
            if (newInterval.end < intervals[i].start) {  
                result.push_back(newInterval);
                result.push_back(intervals[i]);
                is_insert = true;
                continue;
            }
            
            // combine new interval with current interval
            if ((newInterval.start >= intervals[i].start && newInterval.start <= intervals[i].end) ||
                (newInterval.end >= intervals[i].start && newInterval.end <= intervals[i].end)) {
                newInterval.start = min(newInterval.start, intervals[i].start);
                newInterval.end = max(newInterval.end, intervals[i].end);
                continue;
            }
            
            // completely overlap over the current interval
            if ((newInterval.start <= intervals[i].start && newInterval.end >= intervals[i].end)) {
                continue;
            }
            
            // new interval after current interval
            result.push_back(intervals[i]);
        }
        
        if (!is_insert) {
            result.push_back(newInterval);
        }
        
        return result;
    }
};