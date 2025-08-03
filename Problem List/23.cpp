class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Min-heap to get smallest values first
        priority_queue<int, vector<int>, greater<int>> pq;

        // Step 1: Push all node values into the heap
        for (ListNode* list : lists) {
            while (list != nullptr) {
                pq.push(list->val);
                list = list->next;
            }
        }

        // Step 2: Build the new sorted linked list
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        while (!pq.empty()) {
            tail->next = new ListNode(pq.top());
            pq.pop();
            tail = tail->next;
        }

        return dummy->next;
    }
};
