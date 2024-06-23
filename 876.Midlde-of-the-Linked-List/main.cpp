#include<iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

int countNode(ListNode* head) {
	if (head == nullptr) {
		return 0;
	}
	return 1 + countNode(head->next);
}

ListNode* middleNode(ListNode* head) {
	// Solution 1
	int count = countNode(head);
	if (count == 0) {
		return nullptr;
	}

	ListNode* temp = head;
	for (int i = 0; i < count / 2; ++i) {
		temp = temp->next;
	}

	return temp;

	// Solution 2
	/*ListNode* fast = head;
	ListNode* slow = head;
	while (fast != NULL && fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;*/
}

void print(ListNode* head) {
	ListNode* temp = head;
	while (temp != nullptr) {
		cout << temp->val << " ";
		temp = temp->next;
	}
}

int main() {

	ListNode* node1 = new ListNode(1);
	ListNode* node2 = new ListNode(2,node1);
	ListNode* node3 = new ListNode(3,node2);
	ListNode* node4 = new ListNode(4,node3);
	ListNode* node5 = new ListNode(5,node4);
	ListNode* node6 = new ListNode(6,node5);

	cout << countNode(node6) << endl;
	ListNode* temp = middleNode(node5);
	print(temp);


	return 0;
}