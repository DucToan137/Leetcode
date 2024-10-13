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

void sortList(ListNode *head)
{
    if (head == nullptr)
    {
        return;
    }
    ListNode *p = head;
    ListNode *q = head->next;
    while (q != nullptr)
    {
        if (p->val > q->val)
        {
            int temp = p->val;
            p->val = q->val;
            q->val = temp;
        }
        p = p->next;
        q = q->next;
    }
}

ListNode *mergeList(ListNode *p, ListNode *q)
{
    ListNode *head = new ListNode();
    ListNode *r = head;
    while (p != nullptr && q != nullptr)
    {
        if (p->val < q->val)
        {
            r->next = p;
            p = p->next;
        }
        else
        {
            r->next = q;
            q = q->next;
        }
        r = r->next;
    }
    if (p != nullptr)
    {
        r->next = p;
    }
    if (q != nullptr)
    {
        r->next = q;
    }
    return head->next;
}

ListNode *mergeKLists(vector<ListNode *> &lists)
{
    if (lists.size() == 0)
    {
        return nullptr;
    }

    if (lists.size() == 1)
    {
        return lists[0];
    }

    if (lists.size() == 2)
    {
        ListNode *p = lists[0];
        ListNode *q = lists[1];
        ListNode *head = new ListNode();
        ListNode *r = head;
        while (p != nullptr && q != nullptr)
        {
            if (p->val < q->val)
            {
                r->next = p;
                p = p->next;
            }
            else
            {
                r->next = q;
                q = q->next;
            }
            r = r->next;
        }
        if (p != nullptr)
        {
            r->next = p;
        }
        if (q != nullptr)
        {
            r->next = q;
        }
        return head->next;
    }

    ListNode *head = mergeList(lists[0], lists[1]);
    for (int i = 2; i < lists.size(); i++)
    {
        head = mergeList(head, lists[i]);
    }
    sortList(head);
    return head;
}

int main()
{

    return 0;
}