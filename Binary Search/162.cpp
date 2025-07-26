class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        unordered_map<int,int> unmap;
        for(int i = 0;i<nums.size();i++){
            unmap[nums[i]] = i;
        }

        int peak = 0;
        for(auto s:unmap){
            if(nums[peak]<s.first)peak = s.second;
        }

        return peak;
    }
};