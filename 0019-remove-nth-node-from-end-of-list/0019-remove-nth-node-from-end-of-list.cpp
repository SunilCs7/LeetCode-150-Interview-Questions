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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to handle edge cases such as removing the head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* first = dummy;
        ListNode* second = dummy;
        
        // Move first n+1 steps ahead so that the gap between first and second is n nodes
        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }
        
        // Move first to the end, maintaining the gap
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }
        
        // Remove the nth node from the end
        ListNode* nodeToDelete = second->next;
        second->next = second->next->next;
        
        // Free the memory of the node to be deleted
        delete nodeToDelete;
        
        // Return the head of the modified list
        ListNode* newHead = dummy->next;
        delete dummy;  // Free the memory of the dummy node
        return newHead;
    }
};
