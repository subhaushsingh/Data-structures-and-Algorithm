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

struct ListNode
{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution
{
public:
    ListNode *findIntersection(ListNode *head1,ListNode *head2)
    {
        if(head1 == nullptr || head2 == nullptr) return nullptr;
        ListNode* temp1 = head1;
        ListNode* temp2 = head2;

        while(temp1!=temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;

            if(temp1 == temp2) return temp1;
            if(temp1 == nullptr) temp1 = head2;
            if(temp2 == nullptr) temp2 = head1;
        }

        return temp1;

    }
};