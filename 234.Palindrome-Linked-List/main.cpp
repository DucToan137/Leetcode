#include<iostream>
#include<vector>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x,ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode* head) {
	if(head == nullptr) {
		return true;
	}
	else {
		vector<int> nums;
		ListNode* temp = head;
		while (temp != nullptr) {
			nums.push_back(temp->val);
			temp = temp->next;
		}

		int n = nums.size();
		for (int i = 0; i < n / 2; i++) {
			if (nums[i] != nums[n - i - 1]) {
				return false;
			}
		}
		return true;
	}
}

int main() {

	ListNode* head = new ListNode(1);
	ListNode* node1 = new ListNode(2,head);
	ListNode* node2 = new ListNode(2,node1);
	ListNode* node3 = new ListNode(1,node2);


	cout << isPalindrome(node3);

	return 0;
}