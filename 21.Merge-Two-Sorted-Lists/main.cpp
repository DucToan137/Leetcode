#include<iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {};
	ListNode(int x) : val(x), next(nullptr) {};
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};


void sortList(ListNode* head) {
	for (ListNode* temp = head; temp != nullptr; temp = temp->next) {
		for (ListNode* temp1 = temp->next; temp1 != nullptr; temp1 = temp1->next) {
			if (temp->val > temp1->val) {
				int temp2 = temp->val;
				temp->val = temp1->val;
				temp1->val = temp2;
			}
		}
	}
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

	if(list1 == nullptr && list2 == nullptr) {
		return nullptr;
	}
	else if(list1 == nullptr) {
		return list2;
	}
	else if(list2 == nullptr) {
		return list1;
	}

	ListNode* temp1 = list1;
	ListNode* temp2 = list2;

	ListNode* res = new ListNode(list1->val);
	temp1 = temp1->next;

	while (temp1 != nullptr ) {
		res = new ListNode(temp1->val,res);
		temp1 = temp1->next;
	}

	while (temp2 != nullptr) {
		res = new ListNode(temp2->val, res);
		temp2 = temp2->next;
	}

	sortList(res);
	

	return res;
}

int main() {

	ListNode* node = new ListNode(1);
	ListNode* node1 = new ListNode(2,node);
	ListNode* node2 = new ListNode(4,node1);
	ListNode* node3 = new ListNode(5, node2);




	ListNode* list2 = new ListNode(1);
	ListNode* list3 = new ListNode(3, list2);
	ListNode* list4 = new ListNode(4, list3);
	ListNode* list5 = new ListNode(6, list4);


	ListNode *res = mergeTwoLists(node3, list5);

	while(res != nullptr) {
		cout << res->val << " ";
		res = res->next;
	}




	return 0;
}