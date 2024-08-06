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
        ListNode* dummyHead = new ListNode(-1);  // Fixed the type name 'node' to 'ListNode'
        ListNode* curr = dummyHead;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;

        while (temp1 != nullptr || temp2 != nullptr) {
            int sum = carry;

            if (temp1) {
                sum += temp1->val;  // Fixed 'data' to 'val'
                temp1 = temp1->next;  // Advance temp1
            }

            if (temp2) {
                sum += temp2->val;  // Fixed 'data' to 'val'
                temp2 = temp2->next;  // Advance temp2
            }

            carry = sum / 10;
            ListNode* newNode = new ListNode(sum % 10);  // Fixed the creation of new node
            curr->next = newNode;
            curr = curr->next;
        }

        if (carry) {
            ListNode* newNode = new ListNode(carry);  // Fixed the creation of new node with carry
            curr->next = newNode;
        }

        return dummyHead->next;  // Fixed typo from 'dummyNode-next' to 'dummyHead->next'
    }
};
