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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode *temp = head;
        ListNode *tail = head;
        int len = 1;
        while(tail->next){
            len++;
            tail = tail->next;
        }
        k = k%len;
        if(k==0) return head;
        tail->next = head;
        int left = len - k-1;
        while(left != 0){
            left--;
            temp=temp->next;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};