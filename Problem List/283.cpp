class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> res;
        int nonzero = 0;
        for(int i = 0;i<nums.size();i++){
            
            if(nums[i] == 0){
                nonzero++;
            }
            else{
                res.push_back(nums[i]);
            }
        }
        while(nonzero!=0){
            res.push_back(0);
            nonzero--;
        }
        nums = res;
    }
};