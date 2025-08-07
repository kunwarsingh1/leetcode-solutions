class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for(auto &a : s){
            if(a == '6'){
                a = '9';
                break;
            }
        }   
        return stoi(s);
    }
};