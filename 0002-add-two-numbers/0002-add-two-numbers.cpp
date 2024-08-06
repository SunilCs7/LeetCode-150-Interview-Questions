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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);  // Create a dummy node to start the result list.
        ListNode* p = l1;  // Pointer to traverse l1.
        ListNode* q = l2;  // Pointer to traverse l2.
        ListNode* current = dummyHead;  // Pointer to build the result list.
        int carry = 0;  // Initialize carry to 0.

        while (p != nullptr || q != nullptr) {
            int x = (p != nullptr) ? p->val : 0;  // Get value from l1, or 0 if l1 is done.
            int y = (q != nullptr) ? q->val : 0;  // Get value from l2, or 0 if l2 is done.
            int sum = carry + x + y;  // Calculate sum of current digits and carry.
            carry = sum / 10;  // Update carry for next iteration.
            current->next = new ListNode(sum % 10);  // Create a new node with the digit part of the sum.
            current = current->next;  // Move to the next position in the result list.
            if (p != nullptr) p = p->next;  // Move to the next node in l1.
            if (q != nullptr) q = q->next;  // Move to the next node in l2.
        }

        if (carry > 0) {  // If there is a remaining carry, add a new node with its value.
            current->next = new ListNode(carry);
        }

        return dummyHead->next;  // Return the next node of dummyHead as the head of the result list.
    }
};
