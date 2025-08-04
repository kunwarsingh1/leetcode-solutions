#include<algorithm>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j = nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[j]){
                int grb = nums[i];
                nums[i] = nums[j];
                nums[j] = grb;
            }
            else{
                j--;
            }
        }
        for(auto s:nums){
            cout<<s<<endl;
        }
    }
};