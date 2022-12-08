/*
7.1 Create a linked list. Already it is given in the course materials. Now insert one new element
in last position and print the all data of the linked list
*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *node;
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;
    struct Node *four = NULL;
    struct Node *five = NULL;


    one = malloc(sizeof(struct Node));
    two = malloc(sizeof(struct Node));
    three = malloc(sizeof(struct Node));
    four = malloc(sizeof(struct Node));
    five = malloc(sizeof(struct Node));

    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;
    five->data = 5;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;

    int new_data;
    struct Node *new_node = NULL;

    new_node = malloc(sizeof(struct Node));

    printf("Enter New Data: ");
    scanf("%d",&new_data);

    node = one;
    while(node->next != NULL) {
        node = node->next;
    }
    new_node->data = new_data;
    node->next = new_node;
    new_node->next = NULL;

    node = one;
    printf("\nElements of the Data Set: ");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");

    return 0;
}
