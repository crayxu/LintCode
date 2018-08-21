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
     * @param head: a ListNode
     * @param val: An integer
     * @return: a ListNode
     */
    ListNode * removeElements(ListNode * head, int val) {
        
        ListNode* temp = head;
        ListNode* prev = head;
        
        while (temp != NULL) {
            cout << "1" << endl;
            
            if (temp->val == val) {
                if (temp == head) {
                    head = head->next;
                    prev = head;
                    temp = head;
                } else {
                    prev->next = temp->next;
                    temp = temp->next;
                }
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};