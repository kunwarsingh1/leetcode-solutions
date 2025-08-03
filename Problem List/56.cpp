class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> a;

        // First, sort the intervals by start time
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            // If a is empty or there's no overlap, just push the interval
            if (a.empty() || a.back()[1] < nums[i][0]) {
                a.push_back(nums[i]);
            } else {
                // If overlapping, merge with the last interval
                a.back()[1] = max(a.back()[1], nums[i][1]);
            }
        }

        return a;
    }
};
