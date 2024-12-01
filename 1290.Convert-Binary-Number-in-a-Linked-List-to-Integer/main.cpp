#include<iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int convertToDecimal(string binary) {
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

int getDecimalValue(ListNode* head) {
    string binary = "";
    while (head != nullptr) {
        binary += to_string(head->val);
        head = head->next;
    }
    return convertToDecimal(binary);
}

int main() {
    
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);
    
    cout << getDecimalValue(head) << endl;
    
    return 0;
}