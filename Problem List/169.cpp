#include<unordered_map>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> elements;
        for(int i=0;i<nums.size();i++){
            elements[nums[i]]++;
        }

        int max = 0;
         for (auto it : elements) {
            if (it.second > nums.size() / 2) {
                return it.first;
            }
        }
         return -1;
    }
};