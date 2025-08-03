class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        priority_queue<pair<int,vector<int>>> pq;
        for (auto num : nums) {
            int dist = num[0]*num[0] + num[1]*num[1];
            pq.push({dist, num});
            if(pq.size()>k)pq.pop();
            }
        vector<vector<int>> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};