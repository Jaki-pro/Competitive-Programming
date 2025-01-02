// solved by jaki
class Solution {
public:
    void insertAtTail(ListNode*& head, int val) {
        ListNode* nd = new ListNode(val);
        if (head == NULL) {
            head = nd;
            return;
        }
        ListNode* tmp = head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = nd;
    }
    void display(ListNode* head, vector<int>& v) {
        ListNode* tmp = head;
        while (tmp != NULL) {
            v.push_back(tmp->val);
            tmp = tmp->next;
        }
    }
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* res = NULL;
        vector<int> v1, v2, v3;
        display(list1, v1);
        display(list2, v2);
        int n = max(v1.size(), v2.size()); 
        for (int i = v1.size(); i < n; i++)
            v1.push_back(0);
        for (int i = v2.size(); i < n; i++)
            v2.push_back(0);
        int car = 0;
        for (int i = 0; i < n; i++) {
            int a = v1[i] + v2[i] + car;
            car = a / 10;
            v3.push_back(a % 10);
        }
        if(car) v3.push_back(car);
        for (auto c : v3) {
            insertAtTail(res, c);
        }
        return res;
    }
};
