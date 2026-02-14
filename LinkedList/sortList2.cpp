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
// FOr input of 0,1,2

class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode *temp = head;
        int Num_0 = 0, Num_1 = 0, Num_2 = 0;
        while (temp)
        {
            if (temp->val==0) Num_0++;
            else if(temp->val==1) Num_1++;
            else Num_2++;

            temp = temp->next;
        }
        temp = head;
        
            while(Num_0!=0 && temp){
                temp->val = 0;
                Num_0--;
                temp=temp->next;
            }
            while(Num_1!=0 && temp){
                temp->val = 1;
                Num_1--;
                temp=temp->next;
            }
            while(Num_2!=0 && temp){
                temp->val = 2;
                Num_2--;
                temp=temp->next;
            }
        return head;
    }
};