#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ListNode *addTail(ListNode *head, int val)
// {
//     if (head == nullptr)
//     {
//         return new ListNode(val);
//     }

//     ListNode *tail = head;
//     while (tail->next != nullptr)
//     {
//         tail = tail->next;
//     }
//     tail->next = new ListNode(val);
//     return head;
// }

// ListNode *mergeNodes(ListNode *head)
// {
//     int sum = 0;
//     ListNode *res = nullptr;
//     ListNode *temp = head;

//     while (temp != nullptr)
//     {
//         if (temp->val == 0)
//         {
//             if (sum != 0)
//             {
//                 res = addTail(res, sum);
//                 sum = 0;
//             }
//         }
//         else
//         {
//             sum += temp->val;
//         }
//         temp = temp->next;
//     }

//     return res;
// }

ListNode *mergeNodes(ListNode *head)
{
    ListNode *temp = head->next;
    ListNode *ans = new ListNode(-1);
    ListNode *tempAns = ans;
    int sum = 0;
    while (temp)
    {
        if (temp and temp->val != 0)
        {
            sum += temp->val;
        }
        else if (temp and temp->val == 0)
        {
            ListNode *t = new ListNode(sum);
            tempAns->next = t;
            tempAns = tempAns->next;
            sum = 0;
        }
        temp = temp->next;
    }
    return ans->next;
}

int main()
{

    ListNode *tail = new ListNode(0);
    ListNode *node1 = new ListNode(2, tail);
    ListNode *node2 = new ListNode(5, node1);
    ListNode *node3 = new ListNode(4, node2);
    ListNode *node4 = new ListNode(0, node3);
    ListNode *node5 = new ListNode(1, node4);
    ListNode *node6 = new ListNode(3, node5);
    ListNode *node7 = new ListNode(0, node6);

    ListNode *head = mergeNodes(node7);

    for (ListNode *i = head; i != nullptr; i = i->next)
    {
        cout << i->val << " ";
    }

    return 0;
}