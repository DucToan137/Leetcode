#include<iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) :val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {

	if (head == nullptr) {
		return nullptr;
	}
	else {
		ListNode* res = new ListNode(head->val);
		ListNode* temp = head->next;

		while (temp != nullptr) {
			res = new ListNode(temp->val, res);
			temp = temp->next;
		}

		return res;
	}

	
}

void print(ListNode* head) {
	ListNode* temp = head;
	while (temp != nullptr) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << "\n";
}

int main() {

	ListNode* head = new ListNode(1);
	ListNode* node1 = new ListNode(2, head);
	ListNode* node2 = new ListNode(3, node1);
	ListNode* node3 = new ListNode(4, node2);
	ListNode* node4 = new ListNode(5, node3);

	print(node4);

	ListNode* res = reverseList(node4);

	print(res);


	return 0;
}