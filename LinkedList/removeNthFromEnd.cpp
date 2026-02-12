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
    int Length(ListNode* temp){
        int length = 0;
        while(temp){
            length++;
            temp=temp->next;
        }
         return length;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
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
    int Length(ListNode* temp){
        int length = 0;
        while(temp){
            length++;
            temp=temp->next;
        }
        return length;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = Length(head);

    
    if (n == length) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    ListNode* temp = head;
    int index = length - n;

    
    for(int i = 1; i < index; i++) {
        temp = temp->next;
    }

    ListNode* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;

    return head;

    }
};
        
    }
};