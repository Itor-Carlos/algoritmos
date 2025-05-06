
//link: https://leetcode.com/problems/linked-list-cycle/

#include "list_node.h"

bool hasCycle(struct ListNode *head) {
    struct ListNode* fastPointer = head;
    struct ListNode* slowPointer = head;
    
    if(head == NULL || head->next == NULL) return false;
    while(fastPointer != NULL && fastPointer->next != NULL){
        slowPointer = slowPointer->next;
        fastPointer = fastPointer->next->next;
        
        if(slowPointer == fastPointer) return true;
    }
    
    return false;
}  