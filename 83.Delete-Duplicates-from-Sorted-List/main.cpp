#include<iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

void deleteHead(ListNode* head) {
	ListNode* temp = head;
	head = head->next;
	delete temp;
}

void deleteTail(ListNode* head) {
	ListNode* temp = head;
	while (temp->next->next != nullptr) {
		temp = temp->next;
	}
	delete temp->next;
	temp->next = nullptr;
}

void deleteMiddle(ListNode* head, ListNode* node) {
	ListNode* temp = head;
	while (temp->next != node) {
		temp = temp->next;
	}
	temp->next = node->next;
	delete node;
}

ListNode* deleteDuplicates(ListNode* head) {
	ListNode* temp = head;
	while (temp != nullptr && temp->next != nullptr) {
		if (temp->val == temp->next->val) {
			deleteMiddle(head, temp->next);
		}
		else {
			temp = temp->next;
		}
	}
	return head;
}

int main() {

	ListNode* head = new ListNode(1);
	head->next = new ListNode(1);
	head->next->next = new ListNode(3);

	ListNode* result = deleteDuplicates(head);

	while(result != nullptr) {
		cout << result->val << " ";
		result = result->next;
	}

	return 0;
}