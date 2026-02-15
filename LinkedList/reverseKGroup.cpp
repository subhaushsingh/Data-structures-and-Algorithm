#include <bits/stdc++.h>
using namespace std;

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
    ListNode *reverseLL(ListNode *temp)
    {
        if (temp == nullptr || temp->next == nullptr)
            return temp;
        ListNode *s = temp;
        ListNode *f = s->next;
        ListNode *h = f->next;
        s->next = nullptr;
        while (f)
        {
            f->next = s;
            s = f;
            f = h;
            if (h)
                h = h->next;
        }
        return s;
    }

    ListNode *getKthNode(ListNode *temp, int k)
    {
        k -= 1;
        while (temp && k > 0)
        {
            k--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *temp = head;
        ListNode *prevLast = nullptr;
        while (temp)
        {
            ListNode *KthNode = getKthNode(temp, k);
            if (KthNode == nullptr)
            {
                if (prevLast) prevLast->next = temp;
                break;
            }

            ListNode *nextNode = KthNode->next;
            KthNode->next = nullptr;
            reverseLL(temp);
            if (temp == head)
            {
                head = KthNode;
            }
            else
            {
                prevLast->next = KthNode;
            }

            prevLast = temp;
            temp = nextNode;
        }
        return head;
    }
};