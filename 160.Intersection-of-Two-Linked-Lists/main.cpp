#include <iostream>
#include <unordered_map>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    unordered_map<ListNode *, int> map;
    for (auto temp = headA; temp != nullptr; temp = temp->next)
    {
        map[temp] = temp->val;
    }

    for (auto p = headB; p != nullptr; p = p->next)
    {
        if (map.find(p) != map.end())
        {
            return p;
        }
    }

    return nullptr;
}

int main()
{
    return 0;
}