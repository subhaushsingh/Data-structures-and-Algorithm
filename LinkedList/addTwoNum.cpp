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
    ListNode *addTwoNum(ListNode *head1,ListNode *head2)
    {
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        ListNode *t1 = head1;
        ListNode *t2 = head2;
        int carry = 0;
        while(t1 || t2 || carry){
            int sum = 0;
            if(t1){ sum += t1->val;t1=t1->next;}
            if(t2) {sum += t2->val;t2 = t2->next;}
            sum += carry;
            carry = sum/10;
            ListNode *newNode = new ListNode(sum%10);
            temp->next = newNode;
            temp= temp->next;
        }
        return dummy->next;
    }
};