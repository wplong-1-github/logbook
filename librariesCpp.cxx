

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode *head = NULL, *prev = NULL;
  int carry = 0;
  while (l1 || l2) {
    int v1 = l1? l1->val: 0;
    int v2 = l2? l2->val: 0;
    int tmp = v1 + v2 + carry;
    carry = tmp / 10;
    int val = tmp % 10;
    ListNode* cur = new ListNode(val);
    if (!head) head = cur;
    if (prev) prev->next = cur;
    prev = cur;
    l1 = l1? l1->next: NULL;
    l2 = l2? l2->next: NULL;
  }
  if (carry > 0) {
    ListNode* l = new ListNode(carry);
    prev->next = l;
  }
  return head;
}


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    ListNode *p = NULL;
    ListNode *head = NULL;

    int carry = 0;

    while (l1 || l2) {

      int value = 0;

      int v1 = l1? l1->val : 0;
      int v2 = l2? l2->val : 0;
      value = v1 + v2 + carry;
      carry = value / 10;
      value = value % 10;

      ListNode *tmp = new ListNode(value);
      if (!head) head = tmp;
      if (p == NULL) {
        p = tmp;
      }
      else
        p->next = tmp;
      p = tmp;

      l1 = l1? l1->next : NULL;
      l2 = l2? l2->next : NULL;
    }

    if (carry > 0) {
      ListNode *l = new ListNode(carry);
      p->next = l;
    }

    return head;
  }
};

                                                                      
