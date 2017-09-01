/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

 struct lessThanInterval {
    
    inline bool operator() (const Interval& struct1, const Interval& struct2) {
        
        return struct1.start < struct2.start;
    }
};

class Solution {    
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        
        if (intervals.size() == 0) {
            
            return intervals;
        }
        
        sort(intervals.begin(), intervals.end(), lessThanInterval());
        
        vector<Interval> newIntervals;
        
        int newStart = intervals[0].start;
        int newEnd = intervals[0].end;
        
        for (auto myInterval : intervals) {
            
            if (myInterval.start <= newEnd) {
                
                newEnd = max(newEnd, myInterval.end);
            }
            
            else {
                
                newIntervals.push_back(Interval(newStart, newEnd));
                newStart = myInterval.start;
                newEnd = myInterval.end;
            }
        }
        newIntervals.push_back(Interval(newStart, newEnd));
        
        return newIntervals;
    }
};