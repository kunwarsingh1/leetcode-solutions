class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxindex = 0 ;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > nums[maxindex])maxindex = i;
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i] <= nums[maxindex]/2 || i == maxindex)continue;
            else{
                return -1;
            }
        }
        return maxindex;
    }
};