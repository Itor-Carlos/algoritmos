
//link: https://leetcode.com/problems/middle-of-the-linked-list/

struct ListNode* middleNode(struct ListNode* head) {
    int tamanho = 0;
    struct ListNode* temp = head;

    while (temp != NULL) {
        tamanho++;
        temp = temp->next;
    }

    int meio = tamanho / 2;
    for (int i = 0; i < meio; i++) {
        head = head->next;
    }

    return head;
}

