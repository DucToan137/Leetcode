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

int lengthList(ListNode *head)
{
    int count = 0;
    ListNode *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

ListNode *removeHead(ListNode *head)
{
    if (head == nullptr)
        return nullptr;
    ListNode *temp = head;
    head = head->next;
    delete temp;
    return head;
}

ListNode *removeTail(ListNode *head)
{
    if (head == nullptr)
        return nullptr;
    ListNode *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// Solution 1
// ListNode *removeNthFromEnd(ListNode *head, int n)
// {
//     int len = lengthList(head);
//     if (head == nullptr)
//         return nullptr;
//     else
//     {
//         if (len == n)
//         {
//             return removeHead(head);
//         }
//         else
//         {
//             ListNode *temp = head;
//             for (int i = 0; i < len - n - 1; i++)
//             {
//                 temp = temp->next;
//             }
//             ListNode *temp2 = temp->next;
//             temp->next = temp2->next;
//             delete temp2;
//             return head;
//         }
//     }
// }

// Solution 2
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *start = head;
    ListNode *end = head;
    ListNode *temp = nullptr;
    for (int i = 1; i < n; i++)
        start = start->next;
    // start đang ở vị trí n
    // start cách end n node
    while (start->next)
    {
        start = start->next;
        end = end->next;
        if (temp == nullptr)
            temp = head;
        else
            temp = temp->next;
    }
    // end là node cần xóa
    // temp là node trước end
    if (temp == nullptr)
        head = head->next;
    else
        temp->next = end->next;
    return head;
}

void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = new ListNode(5);
    ListNode *node1 = new ListNode(4, head);
    ListNode *node2 = new ListNode(3, node1);
    ListNode *node3 = new ListNode(2, node2);
    ListNode *node4 = new ListNode(1, node3);

    // ListNode *result = removeNthFromEnd(node3, 1);

    // node4 = removeHead(node4);
    // cout << lengthList(node4) << endl;
    // node4 = removeNthFromEnd(node4, 2);

    printList(removeNthFromEnd(node1, 2));

    return 0;
}