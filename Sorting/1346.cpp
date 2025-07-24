class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       unordered_map<int,vector<int>> unmap;
       for(int i = 0;i<arr.size();i++){
        unmap[arr[i]].push_back(i);
       } 


        for (int i = 0; i < arr.size(); i++) {
            int target = arr[i] * 2;
            if (unmap.find(target) != unmap.end()) {
                for (int idx : unmap[target]) {
                    if (idx != i) return true;
                }
            }
        }

       return false;
    }
};