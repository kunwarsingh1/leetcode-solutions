class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> unmap;
        for(auto a:s)unmap[a]++;
        string res = "";
        priority_queue<pair<int,char>> pq;
        for(auto s:unmap){
            pq.push({s.second,s.first});
        }
        while (!pq.empty()) {
            auto [count, ch] = pq.top();
            pq.pop();
            res += string(count, ch);  // repeat ch 'count' times
        }
        return res;
    }
};