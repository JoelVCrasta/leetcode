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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* temp = &dummy;

        while (temp->next != nullptr && temp->next->next != nullptr) {
            ListNode* first = temp->next;
            ListNode* last = temp->next->next->next;

            temp->next = temp->next->next;
            temp->next->next = first;
            temp->next->next->next = last;

            temp = temp->next->next;
        }

        return dummy.next;
    }
};