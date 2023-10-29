#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *insertElement(struct node *, int);
void preOrderTraversal(struct node *);
void inOrderTraversal(struct node *);
void postOrderTraversal(struct node *);
struct node *findSmallestElement(struct node *);
struct node *findLargestElement(struct node *);
struct node *deleteElement(struct node *, int);
int totalNode(struct node *);
int totalExternalNode(struct node *);
int totalInternalNode(struct node *);
int height(struct node *);
void createTree(struct node *);
struct node *deleteTree(struct node *);
int main()
{
    int option, val;
    struct node *tree;
    struct node *ptr;
    createTree(tree);
    do
    {
        printf("\n1.Insert Element \n2.Pre Order Traversal \n3.In Order Traversal \n4.Post Order Traversal \n5.Find the samllest Element \n6.Find the largest Element \n7.Delete the Element \n8.Count the total number of nodes \n9.Count the total number of External nodes \n10.Count the total number of Internal nodes \n11.Determine the height of the tree \n12.Delete the tree \n13.exit\n");
        printf("\n Enter your choice : \n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter the value to be inserted for the new node: \n");
            scanf("%d", &val);
            tree = insertElement(tree, val);
            break;
        case 2:
            printf("\nThe elements are: \n");
            preOrderTraversal(tree);
            break;
        case 3:
            printf("\nThe elements are: \n");
            inOrderTraversal(tree);
            break;
        case 4:
            printf("\nThe elements are: \n");
            postOrderTraversal(tree);
            break;
        case 5:
            ptr = findSmallestElement(tree);
            printf("\nThe samllest elemenet is: %d", ptr->data);
            break;
        case 6:
            ptr = findLargestElement(tree);
            printf("\nThe largest elemenet is: %d", ptr->data);
            break;
        case 7:
            printf("\nEnter the value to be deleted\n");
            scanf("%d", &val);
            tree = deleteElement(tree, val);
            break;
        case 8:
            printf("\nTotal number of nodes = %d\n", totalNode(tree));
            break;
        case 9:
            printf("\nTotal number of external nodes = %d\n",
                   totalExternalNode(tree));
            break;
        case 10:
            printf("\nTotal number of internal nodes = %d\n",
                   totalInternalNode(tree));
            break;
        case 11:
            printf("\nThe Height of the tree = %d\n", height(tree));
            break;
        case 12:
            tree = deleteTree(tree);
            break;
        }
    } while (option != 13);
    return 0;
}
void createTree(struct node *tree)
{
    tree = NULL;
}
struct node *insertElement(struct node *tree, int val)
{
    struct node *ptr, *nodeptr, *parentptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->left = NULL;
    ptr->right = NULL;
    if (tree == NULL)
    {
        tree = ptr;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        parentptr = NULL;
        nodeptr = tree;
        while (nodeptr != NULL)
        {
            parentptr = nodeptr;
            if (val < nodeptr->data)
            {
                nodeptr = nodeptr->left;
            }
            else
            {
                nodeptr = nodeptr->right;
            }
        }
        if (val < parentptr->data)
        {
            parentptr->left = ptr;
        }
        else
        {
            parentptr->right = ptr;
        }
    }
    return tree;
}
void preOrderTraversal(struct node *tree)
{
    if (tree != NULL)
    {
        printf("%d\t", tree->data);
        preOrderTraversal(tree->left);
        preOrderTraversal(tree->right);
    }
}
void inOrderTraversal(struct node *tree)
{
    if (tree != NULL)
    {
        inOrderTraversal(tree->left);
        printf("%d\t", tree->data);
        inOrderTraversal(tree->right);
    }
}
void postOrderTraversal(struct node *tree)
{
    if (tree != NULL)
    {
        postOrderTraversal(tree->left);
        postOrderTraversal(tree->right);
        printf("%d\t", tree->data);
    }
}
struct node *findSmallestElement(struct node *tree)
{
    if ((tree == NULL) || (tree->left == NULL))
    {
        return tree;
    }
    else
    {
        return findSmallestElement(tree->left);
    }
}
struct node *findLargestElement(struct node *tree)
{
    if ((tree == NULL) || (tree->right == NULL))
    {
        return tree;
    }
    else
    {
        return findLargestElement(tree->right);
    }
}
struct node *deleteElement(struct node *tree, int val)
{
    if (tree == NULL)
    {
        printf("\n The Tree is empty. Cannot delete.\n");
        return NULL;
    }
    struct node *cur, *parent, *suc, *psuc, *ptr;
    parent = tree;
    cur = tree->left;
    while ((cur != NULL) && (val != cur->data))
    {
        parent = cur;
        if (val < cur->data)
        {
            cur = cur->left;
        }
        else
        {
            cur = cur->right;
        }
    }
    if (cur == NULL)
    {
        printf("\n The data to be deleted is not present in the tree\n");
        return tree;
    }
    if (cur->left == NULL)
    {
        ptr = cur->right;
    }
    else if (cur->right == NULL)
    {
        ptr = cur->left;
    }
    else
    {
        psuc = cur;
        cur = cur->left;
        while (cur->right != NULL)
        {
            psuc = cur;
            cur = cur->right;
        }
        if (cur == psuc)
        {
            suc = cur->left;
        }
        else
        {
            suc = cur->right;
            psuc->right = suc;
            cur->right = ptr->right;
        }
        ptr = cur;
    }
    if (parent->left == cur)
    {
        parent->left = ptr;
    }
    else
    {
        parent->right = ptr;
    }
    free(cur);
    return tree;
}
int totalNode(struct node *tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    else
    {
        return (totalNode(tree->left) + totalNode(tree->right) + 1);
    }
}
int totalExternalNode(struct node *tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    else if ((tree->left == NULL) && (tree->right == NULL))
    {
        return 1;
    }
    else
    {
        return (totalExternalNode(tree->left) + totalExternalNode(tree->right));
    }
}
int totalInternalNode(struct node *tree)
{
    if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
    {
        return 0;
    }
    else
    {
        return (totalInternalNode(tree->left) + totalInternalNode(tree->right) + 1);
    }
}
int height(struct node *tree)
{
    int leftHeight, rightHeight;
    if (tree == NULL)
    {
        return 0;
    }
    else
    {
        leftHeight = height(tree->left);
        rightHeight = height(tree->right);
        if (leftHeight > rightHeight)
        {
            return (leftHeight + 1);
        }
        else
        {
            return (rightHeight + 1);
        }
    }
}
struct node *deleteTree(struct node *tree)
{
    if (tree != NULL)
    {
        deleteTree(tree->left);
        deleteTree(tree->right);
        free(tree);
        tree = NULL;
    }
}