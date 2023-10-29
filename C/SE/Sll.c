#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct list {
    struct node *head;
};

void initList(struct list *l) {
    l->head = NULL;
}

void addFront(struct list *l, struct node *new) {
    new->next = l->head;
    l->head = new;
}

void addEnd(struct list *l, struct node *new) {
    new->next = NULL;
    if (l->head == NULL) {
        l->head = new;
    } else {
        struct node *ptr = l->head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new;
    }
}

void deleteFront(struct list *l) {
    if (l->head == NULL) {
        printf("UNDERFLOW\n");
        return;
    }
    struct node *temp = l->head;
    l->head = l->head->next;
    free(temp);
}

void deleteEnd(struct list *l) {
    if (l->head == NULL) {
        printf("UNDERFLOW\n");
        return;
    }
    if (l->head->next == NULL) {
        free(l->head);
        l->head = NULL;
        return;
    }
    struct node *ptr = l->head;
    while (ptr->next->next != NULL) {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}

void traverse(struct list *l) {
    struct node *ptr = l->head;
    while (ptr != NULL) {
        printf("ID: %d\n", ptr->data);
        ptr = ptr->next;
    }
}


void deletePosition(struct list *l, int k) {
    if (l->head == NULL || k <= 0) {
        printf("Invalid position or empty list\n");
        return;
    }
    if (k == 1) {
        deleteFront(l);
        return;
    }
    struct node *prev = NULL;
    struct node *curr = l->head;
    for (int i = 1; curr != NULL && i < k; i++) {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL) {
        printf("Position is greater than size of the list\n");
    } else {
        prev->next = curr->next;
        free(curr);
    }
}

void addPosition(struct list *l, struct node *new, int k) {
    if (k <= 0) {
        printf("Invalid position\n");
        return;
    }
    if (k == 1) {
        addFront(l, new);
        return;
    }
    struct node *prev = NULL;
    struct node *curr = l->head;
    for (int i = 1; curr != NULL && i < k; i++) {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL && k > 1) {
        printf("Position is greater than size of the list\n");
    } else {
        prev->next = new;
        new->next = curr;
    }
}

int main() {
    struct list list1, list2;
    initList(&list1);
    initList(&list2);
    struct list *listptr = NULL;
    int listch, actionch, pos;
    struct node *node;

    while (1) {
        do {
            printf("Select the list to operate on:\n1. List 1\t2. List 2\n");
            scanf("%d", &listch);
        } while (listch != 1 && listch != 2);

        listptr = (listch == 1) ? &list1 : &list2;

        printf("Choose operation to be performed:\n");
        printf("1. Addfront\t2. Deletefront\t3. Addend\t4. Deleteend\t5. Traverse\t6. Addgeneral\t7. Deletegeneral\n");
        scanf("%d", &actionch);

        switch (actionch) {
            case 1:
                node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data of the new node: ");
                scanf("%d", &node->data);
                node->next = NULL;
                if (listptr->head == NULL) {
                    listptr->head = node;
                } else {
                    addFront(listptr, node);
                }
                break;
            case 2:
                if (listptr->head == NULL) {
                    printf("Selected list is empty. Cannot delete from the front of the list.\n");
                } else {
                    deleteFront(listptr);
                }
                break;
            case 3:
                node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data of the new node: ");
                scanf("%d", &node->data);
                node->next = NULL;
                if (listptr->head == NULL) {
                    listptr->head = node;
                } else {
                    addEnd(listptr, node);
                }
                break;
            case 4:
                if (listptr->head == NULL) {
                    printf("Cannot delete from an empty list\n");
                } else {
                    deleteEnd(listptr);
                }
                break;
            case 5:
                if (listptr->head == NULL) {
                    printf("Empty list\n");
                } else {
                    traverse(listptr);
                }
                break;
            case 6:
                node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data of the new node: ");
                scanf("%d", &node->data);
                node->next = NULL;
                printf("Enter position: ");
                scanf("%d", &pos);
                addPosition(listptr, node, pos);
                break;
            case 7:
                printf("Enter position: ");
                scanf("%d", &pos);
                deletePosition(listptr, pos);
                break;
            default:
                return 0;
        }
    }

    return 0;
}
