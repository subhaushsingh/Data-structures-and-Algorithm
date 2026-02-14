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
    ListNode* findMiddle(ListNode* head){
        if (head == NULL || head->next == NULL)
    return head;
        ListNode* slow = head;
        ListNode* fast = head->next; // so that we get first middle when length is even
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* mergeList(ListNode* left,ListNode* right){
        ListNode* dummyNode = new ListNode(-1);
        ListNode* last = dummyNode;

        while(left != NULL && right !=NULL){
            if(left->val <= right->val){
                last->next = left;
                left = left->next;                
            }
            else{
                last->next = right;
                right = right->next;                
            }
            last = last->next;
        }

        if(left) last->next = left;
        else last->next = right;

        return dummyNode->next;
    }


    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* middle = findMiddle(head);
        ListNode* left = head;
        ListNode* right = middle->next;
        middle->next = NULL;

        left = sortList(left);
        right = sortList(right);
        return mergeList(left,right);
    }
};