/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* node = head;
        vector<int> v;
        
        while(node!= nullptr){
            v.push_back(node->val);
            node = node->next;
        }

        int j = (v.size()-1);
        for(int i = 0;i<v.size()/2;i++){
            cout<<v[i]<<"=="<<v[j]<<endl;
            if(v[i]!=v[j])return false;
            j--;
        }
        return true;
    }   
};