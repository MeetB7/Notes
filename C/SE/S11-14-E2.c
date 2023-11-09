#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct list
{
    struct node *head;
};

void addfront(struct list *l, struct node *new)
{
    new->next = l->head;
    l->head = new;
}

void addend(struct list *l, struct node *new)
{
    new->next == NULL;
    if (l->head == NULL)
    {
        l->head = new;
        return;
    }
    struct node *ptr = l->head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new;
}

void deletefront(struct list *l)
{
    if (l->head == NULL)
    {
        printf("UNDERFLOW");
        return;
    }
    struct node *temp = l->head;
    l->head = l->head->next;
    free(temp);
    temp = NULL;
}

void deleteend(struct list *l)
{
    if (l->head == NULL)
    {
        printf("UNDERFLOW");
        return;
    }
    if (l->head->next == NULL)
    {
        free(l->head);
        l->head = NULL;
        return;
    }
    struct node *ptr = l->head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}

void traverse(struct list *l)
{
    struct node *ptr = l->head;
    do
    {
        printf("\nID: %d", ptr->data);
        ptr = ptr->next;
    } while (ptr->next != NULL);
}

void delpos(struct list* x,int k){
    struct node* mp,*temp;
    mp = x->head;
    while(mp!=NULL && k!=1){
        mp = mp->next;
        k--;
    }
    if(k>1) printf("Position is greater than size of the list\n");
    else{
        temp = mp->next->next;
        free(mp->next);
        mp->next = temp;
    }
}
void addpos(struct list *x, struct node* s, int k) {
    struct node *mp, *temp;
    mp = x->head;
    while (mp->next != NULL && k>1){
        mp = mp->next;
        k--;
    }
    if (k>1){
        printf("Position is greater than size of the list.\n");
    } 
    else{
        temp = mp->next;
        mp->next = s;
        s->next = temp;
    }
}
int main(){
    struct list list1,list2;
    list1.head = list2.head = NULL;
    struct list* listptr = NULL;
    int listch,actionch,pos;
    struct node* node;
    while(1){
        do{
            printf("Select the list to operate on:\n1.List 1 \t 2.List 2\n");
            scanf("%d",&listch);
        }while(listch!=1 && listch!=2);
        listptr = (listch == 1)? &list1 : &list2;
        printf("Choose operation to be performed:\n");
        printf("1.Addfront\t2.Deletefront\t3.Addend\t4.Deleteend\t5.Traverse\t6.Addgeneral\t7.Deletegeneral\n");
        scanf("%d",&actionch);
        switch(actionch){
            case 1:
            node = (struct node*)malloc(sizeof(struct node));
            printf("Enter the rollnumber of new node: ");
			scanf("%d", &node->data);
            node->next = NULL;
            if((*listptr).head == NULL){
                (*listptr).head = node;
            }
            else    addfront(listptr,node);
            break;
            case 2:
            if( (*listptr).head==NULL){
					printf("Selected list is empty. Can not delete from the front of the list.\n");
				}
				else    deletefront(listptr);
                break;
            case 3:
            node = (struct node*)malloc(sizeof(struct node));
            printf("Enter the rollnumber of new node: ");
			scanf("%d", &node->data);
            (*node).next = NULL;
            if((*listptr).head == NULL){
                (*listptr).head = node;
            }
            else    addend(listptr,node);
            break;
            case 4:
            if(listptr->head == NULL)
            printf("cannot delete from an empty list\n");
            else{
                if((*((*listptr).head)).next==NULL)
                {
                    free((*listptr).head);
					(*listptr).head=NULL;
                }
                else{
                    deleteend(listptr);
                }
            }
            break;
            case 5:
			if( (*listptr).head == NULL )
			printf("Empty list\n");
            break;
            case 6:
            node = (struct node*)malloc(sizeof(struct node));
            printf("Enter the rollnumber of new node: ");
			scanf("%d", &node->data);
            node->next = NULL;
            printf("Enter position: ");
            scanf("%d",&pos);
            pos--;
            addpos(listptr,node,pos);
            break;
            case 7:
            printf("Enter position: ");
            scanf("%d",&pos);
            pos--;
            delpos(listptr,pos);
            break;
            default: return 0;
        }
        if(listptr->head != NULL)
			traverse(listptr);
    }
}