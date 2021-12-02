#include <iostream>
using namespace std;
/* A binary tree node has data, pointer to left child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
//Utility function to create a new tree node
Node *new_node(int new_data)
{
    Node *temp = new Node;
    temp->data = new_data;
    temp->left = temp->right = NULL;
    return temp;
}
void printInorder(Node *node)
{
    if (node == NULL)
        return;
    //  Inorder (Left, Root, Right)
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
void printPreorder(Node *node)
{
    if (node == NULL)
        return;
    // Preorder (Root, Left, Right)
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}
void printPostorder(Node *node)
{
    if (node == NULL)
        return;
    //  Postorder (Left, Right, Root)
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}
int main()
{
    Node *root = new_node(1);
    root->left = new_node(2);
    root->right = new_node(3);
    root->left->left = new_node(4);
    root->left->right = new_node(5);

    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);
    return 0;
}
