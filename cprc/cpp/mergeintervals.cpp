#include <iostream>

/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
*/
#include <unordered_map>
#include <vector>
int main()
{
    //<6, [1,6]>, <
    std::unordered_map<int, std::vector<int> > m;
    std::vector<std::vector<int> > intervals;
    intervals.push_back(std::vector<int>(1,3));
    intervals.push_back(std::vector<int>(2,6));
    intervals.push_back(std::vector<int>(8,10));
    intervals.push_back(std::vector<int>(15,18));

    return 0;
}


