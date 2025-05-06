
//link: https://leetcode.com/problems/reverse-linked-list/

#include "list_node.h"
#include <stdio.h>
#include <stdbool.h>

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    
    while (curr != NULL) {
        struct ListNode *nextTemp = curr->next; 
        curr->next = prev;                      
        prev = curr;                            
        curr = nextTemp;                        
    }

    struct ListNode* reverseList = prev;
    while(reverseList != NULL){
        printf("%d", reverseList->val);
        reverseList = reverseList->next;
    }
    
    return prev;
}