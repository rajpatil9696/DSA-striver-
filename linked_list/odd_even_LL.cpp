/*
// all nodes at odd index should come first followed by even index 
// indexing start from 1 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;  // Save head of even list

        while (even != NULL && even->next != NULL) {
            odd->next = even->next;     // Link odd to next odd node
            odd = odd->next;

            even->next = odd->next;     // Link even to next even node
            even = even->next;
        }

        odd->next = evenHead; // Connect end of odd list to even head
        return head;
    }
};
*/