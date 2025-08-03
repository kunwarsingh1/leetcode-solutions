class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> unmap;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> res;
        for(auto s:nums){
            unmap[s]++;
            }
        for(auto s:unmap){
            pq.push({s.second, s.first});
            if(pq.size()>k)pq.pop();
            }

        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};