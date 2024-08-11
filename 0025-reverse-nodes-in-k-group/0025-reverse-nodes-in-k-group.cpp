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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        // Initialize a dummy node to simplify edge cases
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prevGroupEnd = dummy;
        ListNode* groupStart = head;

        while (true) {
            ListNode* kth = getKthNode(groupStart, k);
            if (!kth) break; // Not enough nodes left to reverse

            ListNode* nextGroupStart = kth->next;
            kth->next = nullptr;

            // Reverse the current group
            prevGroupEnd->next = reverseLinkedList(groupStart);

            // Connect the end of the reversed group to the next group
            groupStart->next = nextGroupStart;

            // Move the pointers to the next group
            prevGroupEnd = groupStart;
            groupStart = nextGroupStart;
        }

        return dummy->next;
    }

private:
    ListNode* getKthNode(ListNode* head, int k) {
        while (head && k > 1) {
            head = head->next;
            k--;
        }
        return head;
    }

    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }

        return prev;
    }
};
