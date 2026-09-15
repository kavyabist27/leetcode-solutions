#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list (required for local testing)
struct ListNode
{
    int val;
    struct ListNode *next;
};

// Your LeetCode solution function
struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;

    while (curr != NULL)
    {
        struct ListNode *nextTemp = curr->next; // Temporarily store the next node
        curr->next = prev;                      // Reverse the current node's pointer
        prev = curr;                            // Move prev forward
        curr = nextTemp;                        // Move curr forward
    }

    return prev;
}

// --- Helper Functions for Local Testing ---

// Create a new node
struct ListNode *createNode(int val)
{
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Print the linked list in LeetCode's format
void printList(struct ListNode *head)
{
    printf("[");
    struct ListNode *curr = head;
    while (curr != NULL)
    {
        printf("%d", curr->val);
        if (curr->next != NULL)
            printf(",");
        curr = curr->next;
    }
    printf("]\n");
}

// Free the allocated memory
void freeList(struct ListNode *head)
{
    struct ListNode *curr = head;
    while (curr != NULL)
    {
        struct ListNode *temp = curr;
        curr = curr->next;
        free(temp);
    }
}

int main()
{
    // Test Case 1: [1,2,3,4,5]
    struct ListNode *head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    printf("Test 1 Original: ");
    printList(head1);
    struct ListNode *reversed1 = reverseList(head1);
    printf("Test 1 Reversed: ");
    printList(reversed1);
    freeList(reversed1);
    printf("\n");

    // Test Case 2: [1,2]
    struct ListNode *head2 = createNode(1);
    head2->next = createNode(2);

    printf("Test 2 Original: ");
    printList(head2);
    struct ListNode *reversed2 = reverseList(head2);
    printf("Test 2 Reversed: ");
    printList(reversed2);
    freeList(reversed2);
    printf("\n");

    // Test Case 3: [] (Empty list)
    struct ListNode *head3 = NULL;
    printf("Test 3 Original: ");
    printList(head3);
    struct ListNode *reversed3 = reverseList(head3);
    printf("Test 3 Reversed: ");
    printList(reversed3);

    return 0;
}