class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        priority_queue<int> pq;
        for(auto s:arr)pq.push(s);
        int data = pq.top();
        for(int i = 0;i<arr.size();i++){
            if(arr[i] == data)return i;
        }
        return 0;
    }
};