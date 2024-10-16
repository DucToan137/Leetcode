#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseBetween(ListNode *head, int left, int right)
{
    if (left == right)
        return head;

    ListNode *temp = new ListNode(0);
    temp->next = head;
    ListNode *pre = temp;
    for (int i = 0; i < left - 1; i++)
    {
        pre = pre->next;
    }

    ListNode *cur = pre->next;
    for (int i = 0; i < right - left; i++)
    {
        ListNode *temp = pre->next;
        pre->next = cur->next;
        cur->next = cur->next->next;
        pre->next->next = temp;
    }

    return temp->next;
}

int main()
{

    return 0;
}