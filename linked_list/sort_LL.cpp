/*
class Solution {
public:
    // Function to sort the linked list
    ListNode* sortList(ListNode* head) {
        // Base case: list is empty or has only one node
        if (!head || !head->next) return head;

        // Step 1: Split the list into two halves using slow and fast pointers
        ListNode* mid = getMid(head);
        ListNode* left = head;
        ListNode* right = mid;

        // Step 2: Recursively sort both halves
        left = sortList(left);
        right = sortList(right);

        // Step 3: Merge the sorted halves
        return merge(left, right);
    }

private:
    // Function to find the middle of the list and split it into two
    ListNode* getMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Cut the list into two halves
        if (prev) prev->next = nullptr;

        return slow;
    }

    // Function to merge two sorted lists
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        // Append the remaining nodes
        tail->next = l1 ? l1 : l2;

        return dummy.next;
    }
};

*/