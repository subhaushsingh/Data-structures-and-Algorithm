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
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == NULL)
            return NULL;
        if (head->next->next == NULL) {
            ListNode* temp = head->next;
            head->next = NULL;
            delete temp;
            return head;
        }

        ListNode* f = head;
        ListNode* s = head;
        ListNode* prev = NULL;
        while (f != NULL && f->next != NULL) {
            prev = s;
            s = s->next;
            f = f->next->next;
        }
        prev->next = s->next;
        delete s;
        return head;
    }
};