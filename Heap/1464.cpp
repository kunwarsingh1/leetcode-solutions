class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto s:nums)pq.push(s);

        int first = pq.top();
        pq.pop();
        int second = pq.top();
        return (first-1)*(second-1);
    }
};