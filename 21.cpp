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
        ListNode dummy;
        ListNode* curr = &dummy;

        // Breaking this loop implies that one of the lists is empty.
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                curr->next = list1;
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }

            curr = curr->next;
        }

        // Clean up remaining elements from list1.
        while (list1 != nullptr) {
            curr->next = list1;
            list1 = list1->next;
            curr = curr->next;
        }

        // Clean up remaining elements from list2.
        while (list2 != nullptr) {
            curr->next = list2;
            list2 = list2->next;
            curr = curr->next;
        }

        return dummy.next;
    }
};
