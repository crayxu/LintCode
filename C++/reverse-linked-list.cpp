/**
 * Definition of singly-linked-list:
 *
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
     * @param head: n
     * @return: The new head of reversed linked list.
     */
    ListNode * reverse(ListNode * head) {
        
        if (head == NULL) {
            return NULL;
        }
        
        ListNode * prev = NULL;
        ListNode * curr = head;
        ListNode * next = head->next;
        
        while (next != NULL) {
            
            curr->next = prev ;
            prev = curr;
            curr = next;
            next = next->next;
            
        }
        
        curr->next = prev;
        head = curr;
        return head;
        
    }
};