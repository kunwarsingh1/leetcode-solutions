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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        priority_queue<int,vector<int>,greater<int>> pq;
        ListNode* pt = list1;
        ListNode* pt2 = list2;
        while(pt != nullptr){
            pq.push(pt->val);
            pt = pt->next;
        }
        while(pt2 != nullptr){
            pq.push(pt2->val);
            pt2 = pt2->next;
        }
          if (pq.empty()) return nullptr;

        // Create the head of the new list
        ListNode* head = new ListNode(pq.top());
        pq.pop();
        ListNode* curr = head;

        // Construct the rest of the list
        while (!pq.empty()) {
            curr->next = new ListNode(pq.top());
            pq.pop();
            curr = curr->next;
        }

        return head;

    }
};