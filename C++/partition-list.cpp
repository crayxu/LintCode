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
     * @param head: The first node of linked list
     * @param x: An integer
     * @return: A ListNode
     */
    ListNode* partition(ListNode * head, int x) {
        ListNode* h1 = new ListNode(0);
        ListNode* h2 = new ListNode(0);
        ListNode* t2 = h2;
        h1->next = head;
        head = h1;
        
        while(head->next) {
            if(head->next->val < x)   // skip node
                head = head->next;
            else {  // remove node from h1 and insert to the tail of h2
                t2->next = head->next;
                head->next = head->next->next;
                t2 = t2->next;
                t2->next = NULL;
            }
        }
        
        head->next = h2->next;
        head = h1->next;
        delete h1;
        delete h2;
        return head;
    }
};