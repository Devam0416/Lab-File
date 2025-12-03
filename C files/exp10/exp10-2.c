#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printList(struct Node *head) {
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAfter(struct Node *prev, int value) {
    if (prev == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = prev->next;
    prev->next = newNode;
}

int main() {
    struct Node *head = NULL, *second = NULL, *third = NULL;

    // Create initial list: 10 → 20 → 30
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printList(head);

    // Insert 25 after second node (between 20 and 30)
    insertAfter(second, 25);

    printList(head);
    return 0;
}