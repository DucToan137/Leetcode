#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insertBehindNode(ListNode *head, ListNode *node, int val)
{
    if (head == nullptr)
    {
        return;
    }
    ListNode *newNode = new ListNode(val);
    newNode->next = node->next;
    node->next = newNode;
}

ListNode *insertGreatestCommonDivisors(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    ListNode *node1 = head;
    ListNode *node2 = head->next;

    while (node2 != nullptr)
    {
        int gcdValue = gcd(node1->val, node2->val);
        ListNode *gcdNode = new ListNode(gcdValue);

        // Insert gcdNode between node1 and node2
        node1->next = gcdNode;
        gcdNode->next = node2;

        // Move to the next pair of nodes
        node1 = node2;
        node2 = node2->next;
    }

    return head;
}

void printList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    vector<int> values = {18, 6, 10, 3};
    ListNode *node1 = new ListNode(values[3]);
    ListNode *node2 = new ListNode(values[2], node1);
    ListNode *node3 = new ListNode(values[1], node2);
    ListNode *node4 = new ListNode(values[0], node3);

    ListNode *result = insertGreatestCommonDivisors(node4);
    // insertBehindNode(node4, node3, 5);

    printList(node4);
    return 0;
}