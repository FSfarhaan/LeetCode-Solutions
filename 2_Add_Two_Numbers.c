#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode * next;
};

void addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode * l3 = (struct ListNode *) malloc (sizeof(struct ListNode));
    struct ListNode * head1 = l1;
    struct ListNode * head2 = l2;
    printf("%d", l1->val);
    printf("%d", l1->next->val);
    printf("%d", l1->next->next->val);
}
 
int main() {
    struct ListNode * l1 = (struct ListNode *) malloc(sizeof(struct ListNode));
    struct ListNode * l2 = (struct ListNode *) malloc(sizeof(struct ListNode));
    l1->val = 13;
    l1->next->val = 23;
    l1->next->next->val = 45;
    addTwoNumbers(l1, l2);
    return 0;
}