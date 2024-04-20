/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval>ans;
    int i=0;
    int n=intervals.size();
    while(i<n&&intervals[i].end<newInterval.start)
    {
        ans.push_back(intervals[i]);
        i++;
    }
    while(i<n&&intervals[i].start<=newInterval.end)
    {
        newInterval.start=min(intervals[i].start,newInterval.start);
        newInterval.end=max(intervals[i].end,newInterval.end);
        i++;
    }
    ans.push_back(newInterval);
    while(i<n)
    {
        ans.push_back(intervals[i]);
        i++;
    }
    return ans;
}
