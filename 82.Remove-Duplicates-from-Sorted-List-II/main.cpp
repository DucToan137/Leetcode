#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *deleteDuplicates(ListNode *head)
{
    if (!head)
        return head;
    ListNode *temp = new ListNode(0, head);
    ListNode *pre = temp;
    while (head)
    {
        if (head->next && head->val == head->next->val)
        {
            while (head->next && head->val == head->next->val)
            {
                head = head->next;
            }
            pre->next = head->next;
        }
        else
        {
            pre = pre->next;
        }
        head = head->next;
    }
    return temp->next;
}

int main()
{

    return 0;
}