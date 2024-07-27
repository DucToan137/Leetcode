#include<iostream>
#include<string>
using namespace std;


struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

string convertToString(ListNode* l) {
	string num = "";
	while (l != nullptr) {
		num += to_string(l->val);
		l = l->next;
	}
	reverse(num.begin(), num.end());
	return num;
}

string Tong(string a, string b) {

	// a = 0
	if (a == "0") {
		return b;
	}


	string result = "";

	
	// a, b > 0
	long n1 = a.length();
	long n2 = b.length();
	long nho = 0;
	long tong = 0;
	long i = 0;

	if (n1 > n2) {
		b.insert(0, n1 - n2, '0');
	}
	if (n1 < n2) {
		a.insert(0, n2 - n1, '0');
	}

	result = a;

	for (i = a.length() - 1; i >= 0; i--) {
		tong = (a[i] - '0') + (b[i] - '0') + nho;
		nho = tong / 10;
		tong = tong % 10;
		result[i] = tong + '0';
	}

	if (nho > 0) {
		result.insert(0, 1, nho + '0');
	}


	return result;
}


ListNode* convertToList(string num) {
	int i = num.length() - 1;
	ListNode* result = new ListNode(num[i] - '0');
	--i;
	ListNode* temp = result;
	while (i >= 0) {
		temp->next = new ListNode(num[i] - '0');
		temp = temp->next;
		--i;
	}
	return result;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	string num1 = convertToString(l1);
	string num2 = convertToString(l2);
	string sum = Tong(num1, num2);

	ListNode* result = convertToList(sum);

	return result;
}

void printList(ListNode* l) {
	while (l != nullptr) {
		cout << l->val << " ";
		l = l->next;
	}
	cout << "\n";
}

int main() {

	ListNode* l1 = new ListNode(2);
	l1->next = new ListNode(4);
	l1->next->next = new ListNode(3);
	string num1 = convertToString(l1);
	//cout << convertToString(l1) << "\n";

	ListNode* l2 = new ListNode(5);
	l2->next = new ListNode(6);
	l2->next->next = new ListNode(4);
	string num2 = convertToString(l2);

	//cout << Tong(num1, num2) << "\n";


	ListNode* sum = addTwoNumbers(l1, l2);
	printList(sum);

	ListNode* l3 = convertToList("123");
	printList(l3);

	return 0;
}
