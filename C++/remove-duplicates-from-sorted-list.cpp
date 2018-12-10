/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param head: head is the head of the linked list
     * @return: head of linked list
     */
    ListNode * deleteDuplicates(ListNode * head) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* temp_node = head;
        while (temp_node->next != NULL) {
            if (temp_node->val == temp_node->next->val) {
                temp_node->next = temp_node->next->next;
            } else {
                temp_node = temp_node->next;
            }
        }
        return head;
    }
};
