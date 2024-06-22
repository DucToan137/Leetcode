#include<iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) :val(x), next(next) {}
};


ListNode* removeElements(ListNode* head, int val) {
	if (head == nullptr) {
		return nullptr;
	}

	/*ListNode* tail = head;
	while (tail->next != nullptr) {
		tail = tail->next;
	}
	cout << tail->val << "\n";*/

	ListNode* temp = head;

	while (temp != nullptr) {
		if (temp->next != nullptr && temp->next->val == val) {
			temp->next = temp->next->next;
		}
		else {
			temp = temp->next;
		}
	}

	if (head->val == val) {
		head = head->next;
	}

	return head;
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

	ListNode* head = new ListNode(7);
	ListNode* node1 = new ListNode(7, head);
	ListNode* node2 = new ListNode(7, node1);
	ListNode* node3 = new ListNode(7, node2);
	ListNode* node4 = new ListNode(7, node3);
	ListNode* node5 = new ListNode(7, node4);
	ListNode* node6 = new ListNode(7, node5);

	print(node6);

	ListNode* res = removeElements(node6, 7);
	// res = removeElements(node6, 6);

	// cout << node6->val;

	print(res);


	return 0;
}