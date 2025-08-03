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
    ListNode* sortList(ListNode* head) {
        vector<int> a;
        ListNode* b = head;
        ListNode* curr = head;
        while(b != nullptr){
            a.push_back(b->val);
            b = b->next;
        }
        sort(a.begin(),a.end());
        for(auto s:a){
            head->val = s;
            head = head->next;
        }
        return curr;
    }
};