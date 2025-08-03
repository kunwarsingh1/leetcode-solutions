class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> unmap;
        vector<int> res;
        for(auto s:nums)unmap[s]++;

        for(auto s:unmap){
            if(s.second >=2)res.push_back(s.first);
        }
        return res;
    }
};